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


/*! \file scan.inl
 *  \brief Inline file for scan.h.
 */

#include <thrust/detail/config.h>
#include <thrust/scan.h>
#include <thrust/iterator/iterator_traits.h>
#include <thrust/system/detail/generic/select_system.h>
#include <thrust/system/detail/generic/scan.h>
#include <thrust/system/detail/generic/scan_by_key.h>
#include <thrust/system/detail/adl/scan.h>
#include <thrust/system/detail/adl/scan_by_key.h>

namespace thrust
{


template<typename System,
         typename InputIterator,
         typename OutputIterator>
  OutputIterator inclusive_scan(thrust::detail::dispatchable_base<System> &system,
                                InputIterator first,
                                InputIterator last,
                                OutputIterator result)
{
  using thrust::system::detail::generic::inclusive_scan;
  return inclusive_scan(thrust::detail::derived_cast(system), first, last, result);
} // end inclusive_scan() 


template<typename System,
         typename InputIterator,
         typename OutputIterator,
         typename AssociativeOperator>
  OutputIterator inclusive_scan(thrust::detail::dispatchable_base<System> &system,
                                InputIterator first,
                                InputIterator last,
                                OutputIterator result,
                                AssociativeOperator binary_op)
{
  using thrust::system::detail::generic::inclusive_scan;
  return inclusive_scan(thrust::detail::derived_cast(system), first, last, result, binary_op);
} // end inclusive_scan()


template<typename System,
         typename InputIterator,
         typename OutputIterator>
  OutputIterator exclusive_scan(thrust::detail::dispatchable_base<System> &system,
                                InputIterator first,
                                InputIterator last,
                                OutputIterator result)
{
  using thrust::system::detail::generic::exclusive_scan;
  return exclusive_scan(thrust::detail::derived_cast(system), first, last, result);
} // end exclusive_scan()


template<typename System,
         typename InputIterator,
         typename OutputIterator,
         typename T>
  OutputIterator exclusive_scan(thrust::detail::dispatchable_base<System> &system,
                                InputIterator first,
                                InputIterator last,
                                OutputIterator result,
                                T init)
{
  using thrust::system::detail::generic::exclusive_scan;
  return exclusive_scan(thrust::detail::derived_cast(system), first, last, result, init);
} // end exclusive_scan()


template<typename System,
         typename InputIterator,
         typename OutputIterator,
         typename T,
         typename AssociativeOperator>
  OutputIterator exclusive_scan(thrust::detail::dispatchable_base<System> &system,
                                InputIterator first,
                                InputIterator last,
                                OutputIterator result,
                                T init,
                                AssociativeOperator binary_op)
{
  using thrust::system::detail::generic::exclusive_scan;
  return exclusive_scan(thrust::detail::derived_cast(system), first, last, result, init, binary_op);
} // end exclusive_scan()


template<typename System,
         typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator>
  OutputIterator inclusive_scan_by_key(thrust::detail::dispatchable_base<System> &system,
                                       InputIterator1 first1,
                                       InputIterator1 last1,
                                       InputIterator2 first2,
                                       OutputIterator result)
{
  using thrust::system::detail::generic::inclusive_scan_by_key;
  return inclusive_scan_by_key(thrust::detail::derived_cast(system), first1, last1, first2, result);
} // end inclusive_scan_by_key()


template<typename System,
         typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator,
         typename BinaryPredicate>
  OutputIterator inclusive_scan_by_key(thrust::detail::dispatchable_base<System> &system,
                                       InputIterator1 first1,
                                       InputIterator1 last1,
                                       InputIterator2 first2,
                                       OutputIterator result,
                                       BinaryPredicate binary_pred)
{
  using thrust::system::detail::generic::inclusive_scan_by_key;
  return inclusive_scan_by_key(thrust::detail::derived_cast(system), first1, last1, first2, result, binary_pred);
} // end inclusive_scan_by_key()


template<typename System,
         typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator,
         typename BinaryPredicate,
         typename AssociativeOperator>
  OutputIterator inclusive_scan_by_key(thrust::detail::dispatchable_base<System> &system,
                                       InputIterator1 first1,
                                       InputIterator1 last1,
                                       InputIterator2 first2,
                                       OutputIterator result,
                                       BinaryPredicate binary_pred,
                                       AssociativeOperator binary_op)
{
  using thrust::system::detail::generic::inclusive_scan_by_key;
  return inclusive_scan_by_key(thrust::detail::derived_cast(system), first1, last1, first2, result, binary_pred, binary_op);
} // end inclusive_scan_by_key()


template<typename System,
         typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator>
  OutputIterator exclusive_scan_by_key(thrust::detail::dispatchable_base<System> &system,
                                       InputIterator1 first1,
                                       InputIterator1 last1,
                                       InputIterator2 first2,
                                       OutputIterator result)
{
  using thrust::system::detail::generic::exclusive_scan_by_key;
  return exclusive_scan_by_key(thrust::detail::derived_cast(system), first1, last1, first2, result);
} // end exclusive_scan_by_key()


template<typename System,
         typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator,
         typename T>
  OutputIterator exclusive_scan_by_key(thrust::detail::dispatchable_base<System> &system,
                                       InputIterator1 first1,
                                       InputIterator1 last1,
                                       InputIterator2 first2,
                                       OutputIterator result,
                                       T init)
{
  using thrust::system::detail::generic::exclusive_scan_by_key;
  return exclusive_scan_by_key(thrust::detail::derived_cast(system), first1, last1, first2, result, init);
} // end exclusive_scan_by_key()


template<typename System,
         typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator,
         typename T,
         typename BinaryPredicate>
  OutputIterator exclusive_scan_by_key(thrust::detail::dispatchable_base<System> &system,
                                       InputIterator1 first1,
                                       InputIterator1 last1,
                                       InputIterator2 first2,
                                       OutputIterator result,
                                       T init,
                                       BinaryPredicate binary_pred)
{
  using thrust::system::detail::generic::exclusive_scan_by_key;
  return exclusive_scan_by_key(thrust::detail::derived_cast(system), first1, last1, first2, result, init, binary_pred);
} // end exclusive_scan_by_key()


template<typename System,
         typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator,
         typename T,
         typename BinaryPredicate,
         typename AssociativeOperator>
  OutputIterator exclusive_scan_by_key(thrust::detail::dispatchable_base<System> &system,
                                       InputIterator1 first1,
                                       InputIterator1 last1,
                                       InputIterator2 first2,
                                       OutputIterator result,
                                       T init,
                                       BinaryPredicate binary_pred,
                                       AssociativeOperator binary_op)
{
  using thrust::system::detail::generic::exclusive_scan_by_key;
  return exclusive_scan_by_key(thrust::detail::derived_cast(system), first1, last1, first2, result, init, binary_pred, binary_op);
} // end exclusive_scan_by_key()


namespace detail
{


template<typename System,
         typename InputIterator,
         typename OutputIterator>
  OutputIterator strip_const_inclusive_scan(const System &system,
                                            InputIterator first,
                                            InputIterator last,
                                            OutputIterator result)
{
  System &non_const_system = const_cast<System&>(system);
  return thrust::inclusive_scan(non_const_system, first, last, result);
} // end inclusive_scan() 


template<typename System,
         typename InputIterator,
         typename OutputIterator,
         typename AssociativeOperator>
  OutputIterator strip_const_inclusive_scan(const System &system,
                                            InputIterator first,
                                            InputIterator last,
                                            OutputIterator result,
                                            AssociativeOperator binary_op)
{
  System &non_const_system = const_cast<System&>(system);
  return thrust::inclusive_scan(non_const_system, first, last, result, binary_op);
} // end inclusive_scan()


template<typename System,
         typename InputIterator,
         typename OutputIterator>
  OutputIterator strip_const_exclusive_scan(const System &system,
                                            InputIterator first,
                                            InputIterator last,
                                            OutputIterator result)
{
  System &non_const_system = const_cast<System&>(system);
  return thrust::exclusive_scan(non_const_system, first, last, result);
} // end exclusive_scan()


template<typename System,
         typename InputIterator,
         typename OutputIterator,
         typename T>
  OutputIterator strip_const_exclusive_scan(const System &system,
                                            InputIterator first,
                                            InputIterator last,
                                            OutputIterator result,
                                            T init)
{
  System &non_const_system = const_cast<System&>(system);
  return thrust::exclusive_scan(non_const_system, first, last, result, init);
} // end exclusive_scan()


template<typename System,
         typename InputIterator,
         typename OutputIterator,
         typename T,
         typename AssociativeOperator>
  OutputIterator strip_const_exclusive_scan(const System &system,
                                            InputIterator first,
                                            InputIterator last,
                                            OutputIterator result,
                                            T init,
                                            AssociativeOperator binary_op)
{
  System &non_const_system = const_cast<System&>(system);
  return thrust::exclusive_scan(non_const_system, first, last, result, init, binary_op);
} // end exclusive_scan()


template<typename System,
         typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator>
  OutputIterator strip_const_inclusive_scan_by_key(const System &system,
                                                   InputIterator1 first1,
                                                   InputIterator1 last1,
                                                   InputIterator2 first2,
                                                   OutputIterator result)
{
  System &non_const_system = const_cast<System&>(system);
  return thrust::inclusive_scan_by_key(non_const_system, first1, last1, first2, result);
} // end inclusive_scan_by_key()


template<typename System,
         typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator,
         typename BinaryPredicate>
  OutputIterator strip_const_inclusive_scan_by_key(const System &system,
                                                   InputIterator1 first1,
                                                   InputIterator1 last1,
                                                   InputIterator2 first2,
                                                   OutputIterator result,
                                                   BinaryPredicate binary_pred)
{
  System &non_const_system = const_cast<System&>(system);
  return thrust::inclusive_scan_by_key(non_const_system, first1, last1, first2, result, binary_pred);
} // end inclusive_scan_by_key()


template<typename System,
         typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator,
         typename BinaryPredicate,
         typename AssociativeOperator>
  OutputIterator strip_const_inclusive_scan_by_key(const System &system,
                                                   InputIterator1 first1,
                                                   InputIterator1 last1,
                                                   InputIterator2 first2,
                                                   OutputIterator result,
                                                   BinaryPredicate binary_pred,
                                                   AssociativeOperator binary_op)
{
  System &non_const_system = const_cast<System&>(system);
  return thrust::inclusive_scan_by_key(non_const_system, first1, last1, first2, result, binary_pred, binary_op);
} // end inclusive_scan_by_key()


template<typename System,
         typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator>
  OutputIterator strip_const_exclusive_scan_by_key(const System &system,
                                                   InputIterator1 first1,
                                                   InputIterator1 last1,
                                                   InputIterator2 first2,
                                                   OutputIterator result)
{
  System &non_const_system = const_cast<System&>(system);
  return thrust::exclusive_scan_by_key(non_const_system, first1, last1, first2, result);
} // end exclusive_scan_by_key()


template<typename System,
         typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator,
         typename T>
  OutputIterator strip_const_exclusive_scan_by_key(const System &system,
                                                   InputIterator1 first1,
                                                   InputIterator1 last1,
                                                   InputIterator2 first2,
                                                   OutputIterator result,
                                                   T init)
{
  System &non_const_system = const_cast<System&>(system);
  return thrust::exclusive_scan_by_key(non_const_system, first1, last1, first2, result, init);
} // end exclusive_scan_by_key()


template<typename System,
         typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator,
         typename T,
         typename BinaryPredicate>
  OutputIterator strip_const_exclusive_scan_by_key(const System &system,
                                                   InputIterator1 first1,
                                                   InputIterator1 last1,
                                                   InputIterator2 first2,
                                                   OutputIterator result,
                                                   T init,
                                                   BinaryPredicate binary_pred)
{
  System &non_const_system = const_cast<System&>(system);
  return thrust::exclusive_scan_by_key(non_const_system, first1, last1, first2, result, init, binary_pred);
} // end exclusive_scan_by_key()


template<typename System,
         typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator,
         typename T,
         typename BinaryPredicate,
         typename AssociativeOperator>
  OutputIterator strip_const_exclusive_scan_by_key(const System &system,
                                                   InputIterator1 first1,
                                                   InputIterator1 last1,
                                                   InputIterator2 first2,
                                                   OutputIterator result,
                                                   T init,
                                                   BinaryPredicate binary_pred,
                                                   AssociativeOperator binary_op)
{
  System &non_const_system = const_cast<System&>(system);
  return thrust::exclusive_scan_by_key(non_const_system, first1, last1, first2, result, init, binary_pred, binary_op);
} // end exclusive_scan_by_key()


} // end detail


template<typename InputIterator,
         typename OutputIterator>
  OutputIterator inclusive_scan(InputIterator first,
                                InputIterator last,
                                OutputIterator result)
{
  using thrust::system::detail::generic::select_system;

  typedef typename thrust::iterator_system<InputIterator>::type  System1;
  typedef typename thrust::iterator_system<OutputIterator>::type System2;

  System1 system1;
  System2 system2;

  return thrust::detail::strip_const_inclusive_scan(select_system(system1,system2), first, last, result);
} // end inclusive_scan()


template<typename InputIterator,
         typename OutputIterator,
         typename BinaryFunction>
  OutputIterator inclusive_scan(InputIterator first,
                                InputIterator last,
                                OutputIterator result,
                                BinaryFunction binary_op)
{
  using thrust::system::detail::generic::select_system;

  typedef typename thrust::iterator_system<InputIterator>::type  System1;
  typedef typename thrust::iterator_system<OutputIterator>::type System2;

  System1 system1;
  System2 system2;

  return thrust::detail::strip_const_inclusive_scan(select_system(system1,system2), first, last, result, binary_op);
} // end inclusive_scan()


template<typename InputIterator,
         typename OutputIterator>
  OutputIterator exclusive_scan(InputIterator first,
                                InputIterator last,
                                OutputIterator result)
{
  using thrust::system::detail::generic::select_system;

  typedef typename thrust::iterator_system<InputIterator>::type  System1;
  typedef typename thrust::iterator_system<OutputIterator>::type System2;

  System1 system1;
  System2 system2;

  return thrust::detail::strip_const_exclusive_scan(select_system(system1,system2), first, last, result);
} // end exclusive_scan()


template<typename InputIterator,
         typename OutputIterator,
         typename T>
  OutputIterator exclusive_scan(InputIterator first,
                                InputIterator last,
                                OutputIterator result,
                                T init)
{
  using thrust::system::detail::generic::select_system;

  typedef typename thrust::iterator_system<InputIterator>::type  System1;
  typedef typename thrust::iterator_system<OutputIterator>::type System2;

  System1 system1;
  System2 system2;

  return thrust::detail::strip_const_exclusive_scan(select_system(system1,system2), first, last, result, init);
} // end exclusive_scan()


template<typename InputIterator,
         typename OutputIterator,
         typename T,
         typename BinaryFunction>
  OutputIterator exclusive_scan(InputIterator first,
                                InputIterator last,
                                OutputIterator result,
                                T init,
                                BinaryFunction binary_op)
{
  using thrust::system::detail::generic::select_system;

  typedef typename thrust::iterator_system<InputIterator>::type  System1;
  typedef typename thrust::iterator_system<OutputIterator>::type System2;

  System1 system1;
  System2 system2;

  return thrust::detail::strip_const_exclusive_scan(select_system(system1,system2), first, last, result, init, binary_op);
} // end exclusive_scan()


template<typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator>
  OutputIterator inclusive_scan_by_key(InputIterator1 first1,
                                       InputIterator1 last1,
                                       InputIterator2 first2,
                                       OutputIterator result)
{
  using thrust::system::detail::generic::select_system;

  typedef typename thrust::iterator_system<InputIterator1>::type System1;
  typedef typename thrust::iterator_system<InputIterator2>::type System2;
  typedef typename thrust::iterator_system<OutputIterator>::type System3;

  System1 system1;
  System2 system2;
  System3 system3;

  return thrust::detail::strip_const_inclusive_scan_by_key(select_system(system1,system2,system3), first1, last1, first2, result);
}


template<typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator,
         typename BinaryPredicate>
  OutputIterator inclusive_scan_by_key(InputIterator1 first1,
                                       InputIterator1 last1,
                                       InputIterator2 first2,
                                       OutputIterator result,
                                       BinaryPredicate binary_pred)
{
  using thrust::system::detail::generic::select_system;

  typedef typename thrust::iterator_system<InputIterator1>::type System1;
  typedef typename thrust::iterator_system<InputIterator2>::type System2;
  typedef typename thrust::iterator_system<OutputIterator>::type System3;

  System1 system1;
  System2 system2;
  System3 system3;

  return thrust::detail::strip_const_inclusive_scan_by_key(select_system(system1,system2,system3), first1, last1, first2, result, binary_pred);
}


template<typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator,
         typename BinaryPredicate,
         typename AssociativeOperator>
  OutputIterator inclusive_scan_by_key(InputIterator1 first1,
                                       InputIterator1 last1,
                                       InputIterator2 first2,
                                       OutputIterator result,
                                       BinaryPredicate binary_pred,
                                       AssociativeOperator binary_op)
{
  using thrust::system::detail::generic::select_system;

  typedef typename thrust::iterator_system<InputIterator1>::type System1;
  typedef typename thrust::iterator_system<InputIterator2>::type System2;
  typedef typename thrust::iterator_system<OutputIterator>::type System3;

  System1 system1;
  System2 system2;
  System3 system3;

  return thrust::detail::strip_const_inclusive_scan_by_key(select_system(system1,system2,system3), first1, last1, first2, result, binary_pred, binary_op);
}


template<typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator>
  OutputIterator exclusive_scan_by_key(InputIterator1 first1,
                                       InputIterator1 last1,
                                       InputIterator2 first2,
                                       OutputIterator result)
{
  using thrust::system::detail::generic::select_system;

  typedef typename thrust::iterator_system<InputIterator1>::type System1;
  typedef typename thrust::iterator_system<InputIterator2>::type System2;
  typedef typename thrust::iterator_system<OutputIterator>::type System3;

  System1 system1;
  System2 system2;
  System3 system3;

  return thrust::detail::strip_const_exclusive_scan_by_key(select_system(system1,system2,system3), first1, last1, first2, result);
}


template<typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator,
         typename T>
  OutputIterator exclusive_scan_by_key(InputIterator1 first1,
                                       InputIterator1 last1,
                                       InputIterator2 first2,
                                       OutputIterator result,
                                       T init)
{
  using thrust::system::detail::generic::select_system;

  typedef typename thrust::iterator_system<InputIterator1>::type System1;
  typedef typename thrust::iterator_system<InputIterator2>::type System2;
  typedef typename thrust::iterator_system<OutputIterator>::type System3;

  System1 system1;
  System2 system2;
  System3 system3;

  return thrust::detail::strip_const_exclusive_scan_by_key(select_system(system1,system2,system3), first1, last1, first2, result, init);
}


template<typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator,
         typename T,
         typename BinaryPredicate>
  OutputIterator exclusive_scan_by_key(InputIterator1 first1,
                                       InputIterator1 last1,
                                       InputIterator2 first2,
                                       OutputIterator result,
                                       T init,
                                       BinaryPredicate binary_pred)
{
  using thrust::system::detail::generic::select_system;

  typedef typename thrust::iterator_system<InputIterator1>::type System1;
  typedef typename thrust::iterator_system<InputIterator2>::type System2;
  typedef typename thrust::iterator_system<OutputIterator>::type System3;

  System1 system1;
  System2 system2;
  System3 system3;

  return thrust::detail::strip_const_exclusive_scan_by_key(select_system(system1,system2,system3), first1, last1, first2, result, init, binary_pred);
}


template<typename InputIterator1,
         typename InputIterator2,
         typename OutputIterator,
         typename T,
         typename BinaryPredicate,
         typename AssociativeOperator>
  OutputIterator exclusive_scan_by_key(InputIterator1 first1,
                                       InputIterator1 last1,
                                       InputIterator2 first2,
                                       OutputIterator result,
                                       T init,
                                       BinaryPredicate binary_pred,
                                       AssociativeOperator binary_op)
{
  using thrust::system::detail::generic::select_system;

  typedef typename thrust::iterator_system<InputIterator1>::type System1;
  typedef typename thrust::iterator_system<InputIterator2>::type System2;
  typedef typename thrust::iterator_system<OutputIterator>::type System3;

  System1 system1;
  System2 system2;
  System3 system3;

  return thrust::detail::strip_const_exclusive_scan_by_key(select_system(system1,system2,system3), first1, last1, first2, result, init, binary_pred, binary_op);
}


} // end namespace thrust

