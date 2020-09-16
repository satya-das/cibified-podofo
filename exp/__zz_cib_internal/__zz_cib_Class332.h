#pragma once


#include "__zz_cib_stl-helpers/__zz_cib_vector-iterator.h"
#include "podofo/doc/PdfFontCache.h"
#include <vector>

namespace __zz_cib_ {
using namespace ::std;
template <typename _T>
struct __zz_cib_Helper<::std::vector<::PoDoFo::TFontCacheElement>, _T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<_T, ::std::vector<::PoDoFo::TFontCacheElement>>);
  using __zz_cib_AbiType = typename _T::__zz_cib_AbiType;
  using _ProxyClass = _T;
  friend class ::std::vector<::PoDoFo::TFontCacheElement>;
  CibPoDoFo::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class261::__zz_cib_Class332::__zz_cib_methodid;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_CibPoDoFo_GetMethodTable(__zz_cib_ids::__zz_cib_Class261::__zz_cib_Class332::__zz_cib_classid))
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
  template <typename _RT>
  static auto capacity_24(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::capacity_24>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto resize_25(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::resize_25>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto resize_26(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::resize_26>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto reserve_27(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::reserve_27>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto shrink_to_fit_28(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::shrink_to_fit_28>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorIndex_29(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorIndex_29>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorIndex_30(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorIndex_30>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto at_31(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::at_31>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto at_32(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::at_32>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto front_33(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::front_33>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto front_34(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::front_34>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto back_35(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::back_35>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto back_36(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::back_36>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto data_37(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::data_37>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto data_38(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::data_38>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto push_back_39(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::push_back_39>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto push_back_40(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::push_back_40>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto pop_back_41(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::pop_back_41>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto insert_42(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::insert_42>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto insert_43(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::insert_43>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto insert_44(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::insert_44>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto erase_45(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::erase_45>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto erase_46(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::erase_46>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto swap_47(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::swap_47>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto clear_48(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::clear_48>(
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
class vector<::PoDoFo::TFontCacheElement>
{
public:
  using value_type = ::PoDoFo::TFontCacheElement;
  using pointer = ::PoDoFo::TFontCacheElement*;
  using iterator = __zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>;
  using const_iterator = __zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement const >;
  using reverse_iterator = __zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>;
  using const_reverse_iterator = __zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >;
  using reference = __zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference;
  using const_reference = __zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference;
  using size_type = size_t;
  vector()
    : std::vector<::PoDoFo::TFontCacheElement>(__zz_cib_MyHelper::__zz_cib_new_0(
      ))
    {}
  vector(::std::vector<::PoDoFo::TFontCacheElement>::size_type n)
    : std::vector<::PoDoFo::TFontCacheElement>(__zz_cib_MyHelper::__zz_cib_new_1(
            __zz_cib_::__zz_cib_ToAbiType<decltype(n)>(std::move(n))))
    {}
  vector(::std::vector<::PoDoFo::TFontCacheElement>::size_type n, const ::PoDoFo::TFontCacheElement& value)
    : std::vector<::PoDoFo::TFontCacheElement>(__zz_cib_MyHelper::__zz_cib_new_2(
            __zz_cib_::__zz_cib_ToAbiType<decltype(n)>(std::move(n)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(value)>(value)))
    {}
  vector(const ::std::vector<::PoDoFo::TFontCacheElement>& x)
    : std::vector<::PoDoFo::TFontCacheElement>(__zz_cib_MyHelper::__zz_cib_copy_3(
            __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)))
    {}
  vector(::std::vector<::PoDoFo::TFontCacheElement>&& __zz_cib_param0)
    : std::vector<::PoDoFo::TFontCacheElement>(__zz_cib_MyHelper::__zz_cib_new_4(
            __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(std::move(__zz_cib_param0))))
    {}
  ~vector() {
  auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
      __zz_cib_MyHelper::__zz_cib_delete_5(
      h
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>& operator=(const ::std::vector<::PoDoFo::TFontCacheElement>& x) {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>&>(
      __zz_cib_MyHelper::__zz_cib_OperatorEqual_6<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>&>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)
      )
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>& operator=(::std::vector<::PoDoFo::TFontCacheElement>&& x) {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>&>(
      __zz_cib_MyHelper::__zz_cib_OperatorEqual_7<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>&>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x))
      )
    );
  }
  void assign(::std::vector<::PoDoFo::TFontCacheElement>::size_type n, const ::PoDoFo::TFontCacheElement& u) {
      __zz_cib_MyHelper::assign_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(n)>(std::move(n)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(u)>(u)
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>::iterator begin() {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::iterator>(
      __zz_cib_MyHelper::begin_9<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>::const_iterator begin() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator>(
      __zz_cib_MyHelper::begin_10<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>::iterator end() {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::iterator>(
      __zz_cib_MyHelper::end_11<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>::const_iterator end() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator>(
      __zz_cib_MyHelper::end_12<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>::reverse_iterator rbegin() {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::reverse_iterator>(
      __zz_cib_MyHelper::rbegin_13<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator rbegin() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator>(
      __zz_cib_MyHelper::rbegin_14<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>::reverse_iterator rend() {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::reverse_iterator>(
      __zz_cib_MyHelper::rend_15<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator rend() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator>(
      __zz_cib_MyHelper::rend_16<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>::const_iterator cbegin() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator>(
      __zz_cib_MyHelper::cbegin_17<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>::const_iterator cend() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator>(
      __zz_cib_MyHelper::cend_18<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator crbegin() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator>(
      __zz_cib_MyHelper::crbegin_19<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator crend() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator>(
      __zz_cib_MyHelper::crend_20<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator>>(
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
  ::std::vector<::PoDoFo::TFontCacheElement>::size_type size() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::size_type>(
      __zz_cib_MyHelper::size_22<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::size_type>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>::size_type max_size() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::size_type>(
      __zz_cib_MyHelper::max_size_23<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::size_type>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>::size_type capacity() const {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::size_type>(
      __zz_cib_MyHelper::capacity_24<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::size_type>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  void resize(::std::vector<::PoDoFo::TFontCacheElement>::size_type sz) {
      __zz_cib_MyHelper::resize_25<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sz)>(std::move(sz))
    );
  }
  void resize(::std::vector<::PoDoFo::TFontCacheElement>::size_type sz, const ::PoDoFo::TFontCacheElement& c) {
      __zz_cib_MyHelper::resize_26<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sz)>(std::move(sz)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(c)
    );
  }
  void reserve(::std::vector<::PoDoFo::TFontCacheElement>::size_type n) {
      __zz_cib_MyHelper::reserve_27<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(n)>(std::move(n))
    );
  }
  void shrink_to_fit() {
      __zz_cib_MyHelper::shrink_to_fit_28<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
  ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference operator[](::std::vector<::PoDoFo::TFontCacheElement>::size_type n) {
      return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference>(
      __zz_cib_MyHelper::__zz_cib_OperatorIndex_29<__zz_cib_::__zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(n)>(std::move(n))
      )
    );
  }
  ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference operator[](::std::vector<::PoDoFo::TFontCacheElement>::size_type n) const {
      return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference>(
      __zz_cib_MyHelper::__zz_cib_OperatorIndex_30<__zz_cib_::__zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(n)>(std::move(n))
      )
    );
  }
  ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference at(::std::vector<::PoDoFo::TFontCacheElement>::size_type n) const {
      return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference>(
      __zz_cib_MyHelper::at_31<__zz_cib_::__zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(n)>(std::move(n))
      )
    );
  }
  ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference at(::std::vector<::PoDoFo::TFontCacheElement>::size_type n) {
      return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference>(
      __zz_cib_MyHelper::at_32<__zz_cib_::__zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(n)>(std::move(n))
      )
    );
  }
  ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference front() {
      return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference>(
      __zz_cib_MyHelper::front_33<__zz_cib_::__zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference front() const {
      return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference>(
      __zz_cib_MyHelper::front_34<__zz_cib_::__zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference back() {
      return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference>(
      __zz_cib_MyHelper::back_35<__zz_cib_::__zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference back() const {
      return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference>(
      __zz_cib_MyHelper::back_36<__zz_cib_::__zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::PoDoFo::TFontCacheElement* data() {
      return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::TFontCacheElement*>(
      __zz_cib_MyHelper::data_37<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::TFontCacheElement*>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  const ::PoDoFo::TFontCacheElement* data() const {
      return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::TFontCacheElement*>(
      __zz_cib_MyHelper::data_38<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::TFontCacheElement*>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  void push_back(const ::PoDoFo::TFontCacheElement& x) {
      __zz_cib_MyHelper::push_back_39<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)
    );
  }
  void push_back(::PoDoFo::TFontCacheElement&& x) {
      __zz_cib_MyHelper::push_back_40<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x))
    );
  }
  void pop_back() {
      __zz_cib_MyHelper::pop_back_41<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>::iterator insert(::std::vector<::PoDoFo::TFontCacheElement>::const_iterator position, const ::PoDoFo::TFontCacheElement& x) {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::iterator>(
      __zz_cib_MyHelper::insert_42<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(position)>(std::move(position)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)
      )
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>::iterator insert(::std::vector<::PoDoFo::TFontCacheElement>::const_iterator position, ::PoDoFo::TFontCacheElement&& x) {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::iterator>(
      __zz_cib_MyHelper::insert_43<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(position)>(std::move(position)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x))
      )
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>::iterator insert(::std::vector<::PoDoFo::TFontCacheElement>::const_iterator position, ::std::vector<::PoDoFo::TFontCacheElement>::size_type n, const ::PoDoFo::TFontCacheElement& x) {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::iterator>(
      __zz_cib_MyHelper::insert_44<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(position)>(std::move(position)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(n)>(std::move(n)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)
      )
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>::iterator erase(::std::vector<::PoDoFo::TFontCacheElement>::const_iterator position) {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::iterator>(
      __zz_cib_MyHelper::erase_45<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(position)>(std::move(position))
      )
    );
  }
  ::std::vector<::PoDoFo::TFontCacheElement>::iterator erase(::std::vector<::PoDoFo::TFontCacheElement>::const_iterator first, ::std::vector<::PoDoFo::TFontCacheElement>::const_iterator last) {
      return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::iterator>(
      __zz_cib_MyHelper::erase_46<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(first)>(std::move(first)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(last)>(std::move(last))
      )
    );
  }
  void swap(::std::vector<::PoDoFo::TFontCacheElement>& __zz_cib_param0) {
      __zz_cib_MyHelper::swap_47<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)
    );
  }
  void clear() {
      __zz_cib_MyHelper::clear_48<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

private:
  __ZZ_CIB_TEMPLATE_CLASS_INTERNALS(__ZZ_CIB_CLASS_NAME(vector<::PoDoFo::TFontCacheElement>), __ZZ_CIB_CLASS_NAME(std::vector<::PoDoFo::TFontCacheElement>));
};
}
