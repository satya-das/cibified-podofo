#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfPagesTreeCache.h"
#include <vector>

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfPagesTreeCache::PdfPagesTreeCache(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfPagesTreeCache::PdfPagesTreeCache(PdfPagesTreeCache&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfPagesTreeCache::PdfPagesTreeCache(const ::PoDoFo::PdfPagesTreeCache& __zz_cib_param0)
  : PoDoFo::PdfPagesTreeCache(__zz_cib_MyHelper::__zz_cib_copy_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

PoDoFo::PdfPagesTreeCache::PdfPagesTreeCache(int nInitialSize)
  : PoDoFo::PdfPagesTreeCache(__zz_cib_MyHelper::__zz_cib_new_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(nInitialSize)>(std::move(nInitialSize))))
  {}

PoDoFo::PdfPagesTreeCache::~PdfPagesTreeCache() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_2(
    h
  );
}

::PoDoFo::PdfPage* PoDoFo::PdfPagesTreeCache::GetPage(int nIndex) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(
    __zz_cib_MyHelper::GetPage_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfPage*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
    )
  );
}

void PoDoFo::PdfPagesTreeCache::AddPageObject(int nIndex, ::PoDoFo::PdfPage* pPage) {
  __zz_cib_MyHelper::AddPageObject_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage))
  );
}

void PoDoFo::PdfPagesTreeCache::AddPageObjects(int nIndex, ::std::vector<::PoDoFo::PdfPage*> vecPages) {
  __zz_cib_MyHelper::AddPageObjects_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(vecPages)>(std::move(vecPages))
  );
}

void PoDoFo::PdfPagesTreeCache::InsertPage(int nAfterPageIndex) {
  __zz_cib_MyHelper::InsertPage_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nAfterPageIndex)>(std::move(nAfterPageIndex))
  );
}

void PoDoFo::PdfPagesTreeCache::InsertPages(int nAfterPageIndex, int nCount) {
  __zz_cib_MyHelper::InsertPages_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nAfterPageIndex)>(std::move(nAfterPageIndex)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nCount)>(std::move(nCount))
  );
}

void PoDoFo::PdfPagesTreeCache::DeletePage(int nIndex) {
  __zz_cib_MyHelper::DeletePage_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
  );
}

void PoDoFo::PdfPagesTreeCache::ClearCache() {
  __zz_cib_MyHelper::ClearCache_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfPagesTreeCache;
  static __zz_cib_AbiType_t<void> __zz_cib_decl ClearCache_0(::PoDoFo::PdfPagesTreeCache* __zz_cib_obj) {
    __zz_cib_obj->ClearCache();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddPageObject_1(::PoDoFo::PdfPagesTreeCache* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex, __zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage) {
    __zz_cib_obj->AddPageObject(
      __zz_cib_::__zz_cib_FromAbiType<int>(nIndex),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DeletePage_2(::PoDoFo::PdfPagesTreeCache* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex) {
    __zz_cib_obj->DeletePage(
      __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfPage*> __zz_cib_decl GetPage_3(::PoDoFo::PdfPagesTreeCache* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfPage*>(
      __zz_cib_obj->GetPage(
        __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl InsertPage_4(::PoDoFo::PdfPagesTreeCache* __zz_cib_obj, __zz_cib_AbiType_t<int> nAfterPageIndex) {
    __zz_cib_obj->InsertPage(
      __zz_cib_::__zz_cib_FromAbiType<int>(nAfterPageIndex)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddPageObjects_5(::PoDoFo::PdfPagesTreeCache* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>> vecPages) {
    __zz_cib_obj->AddPageObjects(
      __zz_cib_::__zz_cib_FromAbiType<int>(nIndex),
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>>(vecPages)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl InsertPages_6(::PoDoFo::PdfPagesTreeCache* __zz_cib_obj, __zz_cib_AbiType_t<int> nAfterPageIndex, __zz_cib_AbiType_t<int> nCount) {
    __zz_cib_obj->InsertPages(
      __zz_cib_::__zz_cib_FromAbiType<int>(nAfterPageIndex),
      __zz_cib_::__zz_cib_FromAbiType<int>(nCount)
    );
  }
  static void __zz_cib_decl __zz_cib_delete_7(::PoDoFo::PdfPagesTreeCache* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfPagesTreeCache>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class462 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::ClearCache_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::AddPageObject_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::DeletePage_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::GetPage_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::InsertPage_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::AddPageObjects_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::InsertPages_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::__zz_cib_delete_7)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfPagesTreeCache>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class462::__zz_cib_GetMethodTable();
}
}

