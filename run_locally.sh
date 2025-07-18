#!/bin/sh
BINARY_HOME=./bin
INPUT_HOME=./input
INPUT=${INPUT_HOME}/AB_NYC_2019.csv

cat ${INPUT} | ${BINARY_HOME}/mapper | sort -k1 | ${BINARY_HOME}/reducer > output
cat output

cat ${INPUT} | ${BINARY_HOME}/mapper_dev | sort -k1 | ${BINARY_HOME}/reducer_dev > output_dev
cat output_dev