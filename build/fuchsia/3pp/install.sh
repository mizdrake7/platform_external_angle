#!/bin/bash
# Copyright 2023 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

set -e
set -x
set -o pipefail

PREFIX="$1"

# Use "--parents" to reserve the relative paths, e.g.
# common/py_utils -> $PREFIX/common/py_utils
cp -rf --parents * "$PREFIX"/

