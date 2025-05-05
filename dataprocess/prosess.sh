#!/bin/bash
find ../2025年集创赛中科芯杯数据集说明 -name "*.bin"  -exec python dataprocess.py {} \;
