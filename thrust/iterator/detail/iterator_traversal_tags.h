/*
 *  Copyright 2008-2011 NVIDIA Corporation
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

namespace thrust
{

// define Boost's traversal tags
struct no_traversal_tag {};

struct incrementable_traversal_tag
  : no_traversal_tag {};

struct single_pass_traversal_tag
  : incrementable_traversal_tag {};

struct forward_traversal_tag
  : single_pass_traversal_tag {};

struct bidirectional_traversal_tag
  : forward_traversal_tag {};

struct random_access_traversal_tag
  : bidirectional_traversal_tag {};

} // end thrust
