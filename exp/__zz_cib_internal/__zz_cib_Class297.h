#pragma once


#include "podofo/doc/PdfFunction.h"
#include <list>

namespace __zz_cib_ {
using namespace ::std;
template <typename _T>
struct __zz_cib_Helper<::std::list<::PoDoFo::PdfFunction>, _T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<_T, ::std::list<::PoDoFo::PdfFunction>>);
  using __zz_cib_AbiType = typename _T::__zz_cib_AbiType;
  using _ProxyClass = _T;
  friend class ::std::list<::PoDoFo::PdfFunction>;
  CibPoDoFo::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class261::__zz_cib_Class297::__zz_cib_methodid;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_CibPoDoFo_GetMethodTable(__zz_cib_ids::__zz_cib_Class261::__zz_cib_Class297::__zz_cib_classid))
  {}
  static __zz_cib_Helper& __zz_cib_instance() {
    static __zz_cib_Helper helper;
    return helper;
  }
  static __zz_cib_MethodTableHelper& __zz_cib_mtbl() {
    return __zz_cib_instance();
  }

  static __zz_cib_AbiType __zz_cib_new_0() {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) ();
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_0>(
      );
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_new_1(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_1>(
      __zz_cib_args...);
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_new_2(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_2>(
      __zz_cib_args...);
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_copy_3(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_copy_3>(
      __zz_cib_args...);
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_new_4(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_4>(
      __zz_cib_args...);
  }
  static auto __zz_cib_delete_5(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_5>(
        __zz_cib_obj
        );
    }
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorEqual_6(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorEqual_6>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorEqual_7(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorEqual_7>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto assign_8(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::assign_8>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto begin_9(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::begin_9>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto begin_10(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::begin_10>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto end_11(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::end_11>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto end_12(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::end_12>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto rbegin_13(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::rbegin_13>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto rbegin_14(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::rbegin_14>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto rend_15(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::rend_15>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto rend_16(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::rend_16>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto cbegin_17(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::cbegin_17>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto cend_18(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::cend_18>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto crbegin_19(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::crbegin_19>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto crend_20(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::crend_20>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto empty_21(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::empty_21>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto size_22(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::size_22>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto max_size_23(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::max_size_23>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto resize_24(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::resize_24>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto resize_25(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::resize_25>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto front_26(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::front_26>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto front_27(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::front_27>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto back_28(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::back_28>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto back_29(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::back_29>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto push_front_30(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::push_front_30>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto push_front_31(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::push_front_31>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto pop_front_32(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::pop_front_32>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto push_back_33(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::push_back_33>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto push_back_34(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::push_back_34>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto pop_back_35(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::pop_back_35>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto insert_36(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::insert_36>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto insert_37(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::insert_37>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto insert_38(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::insert_38>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto erase_39(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::erase_39>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto erase_40(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::erase_40>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto swap_41(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::swap_41>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto clear_42(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::clear_42>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto splice_43(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::splice_43>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto splice_44(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::splice_44>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto splice_45(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::splice_45>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto splice_46(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::splice_46>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto splice_47(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::splice_47>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto splice_48(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::splice_48>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto reverse_49(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::reverse_49>(
      __zz_cib_obj
      );
  }
  static _T* __zz_cib_create_proxy(__zz_cib_AbiType h) {
    return new _T(h);
  }
  static _T __zz_cib_obj_from_handle(__zz_cib_AbiType h) {
    return _T(h);
  }
  static __zz_cib_AbiType& __zz_cib_get_handle(_T* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType const& __zz_cib_get_handle(const _T* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType __zz_cib_release_handle(_T* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;
    __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static _ProxyClass* __zz_cib_from_handle(__zz_cib_AbiType h) {
    auto&  dis   = __zz_cib_instance();
    auto* proxy = dis.proxyMgr.findProxy(h);
    if (proxy == nullptr)
      proxy = __zz_cib_create_proxy(h);
    return proxy;
  }
  static void __zz_cib_add_proxy(_ProxyClass* __zz_cib_obj, __zz_cib_AbiType h) {
    auto& dis = __zz_cib_instance();
    dis.proxyMgr.addProxy(__zz_cib_obj, h);
  }
  static void __zz_cib_remove_proxy(__zz_cib_AbiType h) {
    auto& dis = __zz_cib_instance();
      dis.proxyMgr.removeProxy(h);
  }
};
}
 namespace std {
template<>
class list<::PoDoFo::PdfFunction>
{
public:
  using value_type = ::PoDoFo::PdfFunction;
  using pointer = typename std::allocator_traits<std::allocator<::PoDoFo::PdfFunction>>::pointer;
  using const_pointer = typename std::allocator_traits<std::allocator<::PoDoFo::PdfFunction>>::const_pointer;
  using reference = typename __zz_cib_stl_helpers::bidirectional_iterator<::PoDoFo::PdfFunction>::reference;
  using const_reference = const value_type&;
  using size_type = std::size_t;
  using iterator = __zz_cib_stl_helpers::bidirectional_iterator<::PoDoFo::PdfFunction>;
  using const_iterator = __zz_cib_stl_helpers::bidirectional_iterator<::PoDoFo::PdfFunction const >;
  using reverse_iterator = __zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>;
  using const_reverse_iterator = __zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >;
  list()
    : std::list<::PoDoFo::PdfFunction>(__zz_cib_MyHelper::__zz_cib_new_0(
      ))
    {}
  list(::std::list<::PoDoFo::PdfFunction>::size_type n)
    : std::list<::PoDoFo::PdfFunction>(__zz_cib_MyHelper::__zz_cib_new_1(
            __zz_cib_::__zz_cib_ToAbiType<decltype(n)>(std::move(n))))
    {}
  list(::std::list<::PoDoFo::PdfFunction>::size_type n, const ::PoDoFo::PdfFunction& value)
    : std::list<::PoDoFo::PdfFunction>(__zz_cib_MyHelper::__zz_cib_new_2(
            __zz_cib_::__zz_cib_ToAbiType<decltype(n)>(std::move(n)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(value)>(value)))
    {}
  list(const ::std::list<::PoDoFo::PdfFunction>& x)
    : std::list<::PoDoFo::PdfFunction>(__zz_cib_MyHelper::__zz_cib_copy_3(
            __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)))
    {}
  list(::std::list<::PoDoFo::PdfFunction>&& x)
    : std::list<::PoDoFo::PdfFunction>(__zz_cib_MyHelper::__zz_cib_new_4(
            __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x))))
    {}
  ~list() {
  auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
      __zz_cib_MyHelper::__zz_cib_delete_5(
      h
    );
  }
  ::std::list<::PoDoFo::PdfFunction>& operator=(const ::std::list<::PoDoFo::PdfFunction>& x) {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>&>(
      __zz_cib_MyHelper::__zz_cib_OperatorEqual_6<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>&>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>& operator=(::std::list<::PoDoFo::PdfFunction>&& x) {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>&>(
      __zz_cib_MyHelper::__zz_cib_OperatorEqual_7<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>&>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x))
      )
    );
  }
  void assign(::std::list<::PoDoFo::PdfFunction>::size_type n, const ::PoDoFo::PdfFunction& t) {
      __zz_cib_MyHelper::assign_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(n)>(std::move(n)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(t)>(t)
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::iterator begin() {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::iterator>(
      __zz_cib_MyHelper::begin_9<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::const_iterator begin() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(
      __zz_cib_MyHelper::begin_10<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::iterator end() {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::iterator>(
      __zz_cib_MyHelper::end_11<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::const_iterator end() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(
      __zz_cib_MyHelper::end_12<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::reverse_iterator rbegin() {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::reverse_iterator>(
      __zz_cib_MyHelper::rbegin_13<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator rbegin() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator>(
      __zz_cib_MyHelper::rbegin_14<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::reverse_iterator rend() {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::reverse_iterator>(
      __zz_cib_MyHelper::rend_15<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator rend() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator>(
      __zz_cib_MyHelper::rend_16<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::const_iterator cbegin() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(
      __zz_cib_MyHelper::cbegin_17<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::const_iterator cend() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(
      __zz_cib_MyHelper::cend_18<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator crbegin() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator>(
      __zz_cib_MyHelper::crbegin_19<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator crend() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator>(
      __zz_cib_MyHelper::crend_20<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  bool empty() const {
      return __zz_cib_::__zz_cib_FromAbiType<bool>(
      __zz_cib_MyHelper::empty_21<__zz_cib_::__zz_cib_AbiType_t<bool>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::size_type size() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::size_type>(
      __zz_cib_MyHelper::size_22<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::size_type>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::size_type max_size() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::size_type>(
      __zz_cib_MyHelper::max_size_23<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::size_type>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  void resize(::std::list<::PoDoFo::PdfFunction>::size_type sz) {
      __zz_cib_MyHelper::resize_24<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sz)>(std::move(sz))
    );
  }
  void resize(::std::list<::PoDoFo::PdfFunction>::size_type sz, const ::PoDoFo::PdfFunction& c) {
      __zz_cib_MyHelper::resize_25<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sz)>(std::move(sz)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(c)
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::reference front() {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::reference>(
      __zz_cib_MyHelper::front_26<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::const_reference front() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_reference>(
      __zz_cib_MyHelper::front_27<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::reference back() {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::reference>(
      __zz_cib_MyHelper::back_28<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::const_reference back() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_reference>(
      __zz_cib_MyHelper::back_29<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  void push_front(const ::PoDoFo::PdfFunction& x) {
      __zz_cib_MyHelper::push_front_30<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)
    );
  }
  void push_front(::PoDoFo::PdfFunction&& x) {
      __zz_cib_MyHelper::push_front_31<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x))
    );
  }
  void pop_front() {
      __zz_cib_MyHelper::pop_front_32<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
  void push_back(const ::PoDoFo::PdfFunction& x) {
      __zz_cib_MyHelper::push_back_33<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)
    );
  }
  void push_back(::PoDoFo::PdfFunction&& x) {
      __zz_cib_MyHelper::push_back_34<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x))
    );
  }
  void pop_back() {
      __zz_cib_MyHelper::pop_back_35<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::iterator insert(::std::list<::PoDoFo::PdfFunction>::const_iterator position, const ::PoDoFo::PdfFunction& x) {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::iterator>(
      __zz_cib_MyHelper::insert_36<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(position)>(std::move(position)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::iterator insert(::std::list<::PoDoFo::PdfFunction>::const_iterator position, ::PoDoFo::PdfFunction&& x) {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::iterator>(
      __zz_cib_MyHelper::insert_37<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(position)>(std::move(position)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x))
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::iterator insert(::std::list<::PoDoFo::PdfFunction>::const_iterator position, ::std::list<::PoDoFo::PdfFunction>::size_type n, const ::PoDoFo::PdfFunction& x) {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::iterator>(
      __zz_cib_MyHelper::insert_38<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(position)>(std::move(position)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(n)>(std::move(n)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::iterator erase(::std::list<::PoDoFo::PdfFunction>::const_iterator position) {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::iterator>(
      __zz_cib_MyHelper::erase_39<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(position)>(std::move(position))
      )
    );
  }
  ::std::list<::PoDoFo::PdfFunction>::iterator erase(::std::list<::PoDoFo::PdfFunction>::const_iterator position, ::std::list<::PoDoFo::PdfFunction>::const_iterator last) {
      return __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::iterator>(
      __zz_cib_MyHelper::erase_40<__zz_cib_::__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(position)>(std::move(position)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(last)>(std::move(last))
      )
    );
  }
  void swap(::std::list<::PoDoFo::PdfFunction>& __zz_cib_param0) {
      __zz_cib_MyHelper::swap_41<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)
    );
  }
  void clear() {
      __zz_cib_MyHelper::clear_42<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
  void splice(::std::list<::PoDoFo::PdfFunction>::const_iterator position, ::std::list<::PoDoFo::PdfFunction>& x) {
      __zz_cib_MyHelper::splice_43<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(position)>(std::move(position)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)
    );
  }
  void splice(::std::list<::PoDoFo::PdfFunction>::const_iterator position, ::std::list<::PoDoFo::PdfFunction>&& x) {
      __zz_cib_MyHelper::splice_44<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(position)>(std::move(position)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x))
    );
  }
  void splice(::std::list<::PoDoFo::PdfFunction>::const_iterator position, ::std::list<::PoDoFo::PdfFunction>& x, ::std::list<::PoDoFo::PdfFunction>::const_iterator i) {
      __zz_cib_MyHelper::splice_45<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(position)>(std::move(position)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x),
      __zz_cib_::__zz_cib_ToAbiType<decltype(i)>(std::move(i))
    );
  }
  void splice(::std::list<::PoDoFo::PdfFunction>::const_iterator position, ::std::list<::PoDoFo::PdfFunction>&& x, ::std::list<::PoDoFo::PdfFunction>::const_iterator i) {
      __zz_cib_MyHelper::splice_46<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(position)>(std::move(position)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(i)>(std::move(i))
    );
  }
  void splice(::std::list<::PoDoFo::PdfFunction>::const_iterator position, ::std::list<::PoDoFo::PdfFunction>& x, ::std::list<::PoDoFo::PdfFunction>::const_iterator first, ::std::list<::PoDoFo::PdfFunction>::const_iterator last) {
      __zz_cib_MyHelper::splice_47<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(position)>(std::move(position)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x),
      __zz_cib_::__zz_cib_ToAbiType<decltype(first)>(std::move(first)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(last)>(std::move(last))
    );
  }
  void splice(::std::list<::PoDoFo::PdfFunction>::const_iterator position, ::std::list<::PoDoFo::PdfFunction>&& x, ::std::list<::PoDoFo::PdfFunction>::const_iterator first, ::std::list<::PoDoFo::PdfFunction>::const_iterator last) {
      __zz_cib_MyHelper::splice_48<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(position)>(std::move(position)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(first)>(std::move(first)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(last)>(std::move(last))
    );
  }
  void reverse() {
      __zz_cib_MyHelper::reverse_49<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

private:
  __ZZ_CIB_TEMPLATE_CLASS_INTERNALS(__ZZ_CIB_CLASS_NAME(list<::PoDoFo::PdfFunction>), __ZZ_CIB_CLASS_NAME(std::list<::PoDoFo::PdfFunction>));
};
}
