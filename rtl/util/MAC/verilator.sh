#!/bin/sh

DIR=$(dirname $0)

echo "## Linting top modules in ${DIR}"
for f in ${DIR}/top_*\.*v; do
    echo "##   Checking ${f}"
    verilator --lint-only -Wall -I${DIR} -I${DIR}/../common $f
done
