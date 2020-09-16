#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfPagesTreeCache.h"
#include <vector>

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-library-type-handler.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
class __zz_cib_Generic<::PoDoFo::PdfPagesTreeCache> : public ::PoDoFo::PdfPagesTreeCache {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfPagesTreeCache>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, int nInitialSize)
    : ::PoDoFo::PdfPagesTreeCache::PdfPagesTreeCache(    std::move(nInitialSize))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfPagesTreeCache& __zz_cib_param0)
    : ::PoDoFo::PdfPagesTreeCache::PdfPagesTreeCache(    __zz_cib_param0)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  void ClearCache() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::ClearCache_0>(
      __zz_cib_h_
    );
  }
  void AddPageObject(int nIndex, ::PoDoFo::PdfPage* pPage) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(nIndex)>, __zz_cib_AbiType_t<decltype(pPage)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::AddPageObject_1>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage))
    );
  }
  void DeletePage(int nIndex) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(nIndex)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::DeletePage_2>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
    );
  }
  ::PoDoFo::PdfPage* GetPage(int nIndex) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfPage*>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(nIndex)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfPage*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetPage_3>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
      )
    );
  }
  void InsertPage(int nAfterPageIndex) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(nAfterPageIndex)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::InsertPage_4>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(nAfterPageIndex)>(std::move(nAfterPageIndex))
    );
  }
  void AddPageObjects(int nIndex, ::std::vector<::PoDoFo::PdfPage*> vecPages) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(nIndex)>, __zz_cib_AbiType_t<decltype(vecPages)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::AddPageObjects_5>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(vecPages)>(std::move(vecPages))
    );
  }
  void InsertPages(int nAfterPageIndex, int nCount) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(nAfterPageIndex)>, __zz_cib_AbiType_t<decltype(nCount)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::InsertPages_6>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(nAfterPageIndex)>(std::move(nAfterPageIndex)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nCount)>(std::move(nCount))
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_7>(
      __zz_cib_h_
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfPagesTreeCache)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class462::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache> : public ::PoDoFo::PdfPagesTreeCache {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfPagesTreeCache>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfPagesTreeCache::PdfPagesTreeCache;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfPagesTreeCache>(__zz_cib_proxy, __zz_cib_mtbl, *__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<int> nInitialSize) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfPagesTreeCache>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<int>(nInitialSize));
  }
  static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfPage*> __zz_cib_decl GetPage_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfPage*>(
      __zz_cib_obj->::PoDoFo::PdfPagesTreeCache::GetPage(
        __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddPageObject_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex, __zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage) {
    __zz_cib_obj->::PoDoFo::PdfPagesTreeCache::AddPageObject(
      __zz_cib_::__zz_cib_FromAbiType<int>(nIndex),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddPageObjects_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>> vecPages) {
    __zz_cib_obj->::PoDoFo::PdfPagesTreeCache::AddPageObjects(
      __zz_cib_::__zz_cib_FromAbiType<int>(nIndex),
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>>(vecPages)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl InsertPage_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nAfterPageIndex) {
    __zz_cib_obj->::PoDoFo::PdfPagesTreeCache::InsertPage(
      __zz_cib_::__zz_cib_FromAbiType<int>(nAfterPageIndex)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl InsertPages_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nAfterPageIndex, __zz_cib_AbiType_t<int> nCount) {
    __zz_cib_obj->::PoDoFo::PdfPagesTreeCache::InsertPages(
      __zz_cib_::__zz_cib_FromAbiType<int>(nAfterPageIndex),
      __zz_cib_::__zz_cib_FromAbiType<int>(nCount)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DeletePage_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex) {
    __zz_cib_obj->::PoDoFo::PdfPagesTreeCache::DeletePage(
      __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ClearCache_9(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfPagesTreeCache::ClearCache();
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class462 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::__zz_cib_delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::GetPage_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::AddPageObject_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::AddPageObjects_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::InsertPage_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::InsertPages_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::DeletePage_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::ClearCache_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 11 };
  return &methodTable;
}
}}}
