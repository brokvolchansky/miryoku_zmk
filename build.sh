#!/bin/bash

rm -fr build
mkdir -p build

CONTAINER_ID=$(docker ps -q -f "volume=/workspaces/zmk")

echo "Using container: $CONTAINER_ID"

echo "The left one..."
docker exec -w /workspaces/zmk/app $CONTAINER_ID west build -p -d build/left -b nice_nano_v2 -- \
  -DSHIELD="corne_left nice_view_adapter nice_view" \
  -DZMK_CONFIG=/workspaces/zmk-config/config

echo "The right one..."
docker exec -w /workspaces/zmk/app $CONTAINER_ID west build -p -d build/right -b nice_nano_v2 -- \
  -DSHIELD="corne_right nice_view_adapter nice_view" \
  -DZMK_CONFIG=/workspaces/zmk-config/config

echo "Settings reset..."
docker exec -w /workspaces/zmk/app $CONTAINER_ID west build -p -d build/reset -b nice_nano_v2 -- \
  -DSHIELD=settings_reset

echo "Copy files..."
docker cp $CONTAINER_ID:/workspaces/zmk/app/build/left/zephyr/zmk.uf2 ./build/chocofi_left.uf2
docker cp $CONTAINER_ID:/workspaces/zmk/app/build/right/zephyr/zmk.uf2 ./build/chocofi_right.uf2
docker cp $CONTAINER_ID:/workspaces/zmk/app/build/reset/zephyr/zmk.uf2 ./build/chocofi_reset.uf2

echo "Ready! The files in the build dir are:"
ls -la build/*.uf2