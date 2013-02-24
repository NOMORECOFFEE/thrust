/*
 *  Copyright 2008-2012 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#pragma once

#include <thrust/detail/config.h>

// get the execution policies definitions first
#include <thrust/system/hpx/detail/execution_policy.h>

// now get all the algorithm definitions

#include <thrust/system/hpx/detail/adjacent_difference.h>
#include <thrust/system/hpx/detail/assign_value.h>
#include <thrust/system/hpx/detail/binary_search.h>
#include <thrust/system/hpx/detail/copy.h>
#include <thrust/system/hpx/detail/copy_if.h>
#include <thrust/system/hpx/detail/count.h>
#include <thrust/system/hpx/detail/equal.h>
#include <thrust/system/hpx/detail/extrema.h>
#include <thrust/system/hpx/detail/fill.h>
#include <thrust/system/hpx/detail/find.h>
#include <thrust/system/hpx/detail/for_each.h>
#include <thrust/system/hpx/detail/gather.h>
#include <thrust/system/hpx/detail/generate.h>
#include <thrust/system/hpx/detail/get_value.h>
#include <thrust/system/hpx/detail/inner_product.h>
#include <thrust/system/hpx/detail/iter_swap.h>
#include <thrust/system/hpx/detail/logical.h>
#include <thrust/system/hpx/detail/malloc_and_free.h>
#include <thrust/system/hpx/detail/merge.h>
#include <thrust/system/hpx/detail/mismatch.h>
#include <thrust/system/hpx/detail/partition.h>
#include <thrust/system/hpx/detail/reduce.h>
#include <thrust/system/hpx/detail/reduce_by_key.h>
#include <thrust/system/hpx/detail/remove.h>
#include <thrust/system/hpx/detail/replace.h>
#include <thrust/system/hpx/detail/reverse.h>
#include <thrust/system/hpx/detail/scan.h>
#include <thrust/system/hpx/detail/scan_by_key.h>
#include <thrust/system/hpx/detail/scatter.h>
#include <thrust/system/hpx/detail/sequence.h>
#include <thrust/system/hpx/detail/set_operations.h>
#include <thrust/system/hpx/detail/sort.h>
#include <thrust/system/hpx/detail/swap_ranges.h>
#include <thrust/system/hpx/detail/tabulate.h>
#include <thrust/system/hpx/detail/transform.h>
#include <thrust/system/hpx/detail/transform_reduce.h>
#include <thrust/system/hpx/detail/transform_scan.h>
#include <thrust/system/hpx/detail/uninitialized_copy.h>
#include <thrust/system/hpx/detail/uninitialized_fill.h>
#include <thrust/system/hpx/detail/unique.h>
#include <thrust/system/hpx/detail/unique_by_key.h>

