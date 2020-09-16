#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfInputStream.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfAnnotation.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfField.h"
#include "podofo/doc/PdfPage.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-library-type-handler.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
class __zz_cib_Generic<::PoDoFo::PdfPage> : public ::PoDoFo::PdfPage {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfPage>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfRect& rSize, ::PoDoFo::PdfDocument* pParent)
    : ::PoDoFo::PdfPage::PdfPage(    rSize,
    std::move(pParent))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfRect& rSize, ::PoDoFo::PdfVecObjects* pParent)
    : ::PoDoFo::PdfPage::PdfPage(    rSize,
    std::move(pParent))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, ::PoDoFo::PdfObject* pObject, const std::deque<PdfObject*>& listOfParents)
    : ::PoDoFo::PdfPage::PdfPage(    std::move(pObject),
    listOfParents)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfPage& __zz_cib_param0)
    : ::PoDoFo::PdfPage::PdfPage(    __zz_cib_param0)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  void SetICCProfile(const char* pszCSTag, ::PoDoFo::PdfInputStream* pStream, ::PoDoFo::pdf_int64 nColorComponents, ::PoDoFo::EPdfColorSpace eAlternateColorSpace) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pszCSTag)>, __zz_cib_AbiType_t<decltype(pStream)>, __zz_cib_AbiType_t<decltype(nColorComponents)>, __zz_cib_AbiType_t<decltype(eAlternateColorSpace)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::SetICCProfile_0>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszCSTag)>(std::move(pszCSTag)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nColorComponents)>(std::move(nColorComponents)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eAlternateColorSpace)>(std::move(eAlternateColorSpace))
    );
  }
  void SetRotation(int nRotation) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(nRotation)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::SetRotation_1>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(nRotation)>(std::move(nRotation))
    );
  }
  const ::PoDoFo::PdfRect GetArtBox() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<const ::PoDoFo::PdfRect>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetArtBox_2>(
        __zz_cib_h_
      )
    );
  }
  const ::PoDoFo::PdfRect GetTrimBox() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<const ::PoDoFo::PdfRect>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetTrimBox_3>(
        __zz_cib_h_
      )
    );
  }
  ::PoDoFo::PdfObject* GetContents() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfObject*>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetContents_4>(
        __zz_cib_h_
      )
    );
  }
  int GetNumAnnots() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetNumAnnots_5>(
        __zz_cib_h_
      )
    );
  }
  ::PoDoFo::PdfObject* GetResources() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfObject*>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetResources_6>(
        __zz_cib_h_
      )
    );
  }
  const ::PoDoFo::PdfRect GetMediaBox() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<const ::PoDoFo::PdfRect>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetMediaBox_7>(
        __zz_cib_h_
      )
    );
  }
  const ::PoDoFo::PdfRect GetPageSize() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<const ::PoDoFo::PdfRect>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetPageSize_8>(
        __zz_cib_h_
      )
    );
  }
  int GetRotation() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetRotation_9>(
        __zz_cib_h_
      )
    );
  }
  const ::PoDoFo::PdfRect GetBleedBox() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<const ::PoDoFo::PdfRect>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetBleedBox_10>(
        __zz_cib_h_
      )
    );
  }
  ::PoDoFo::PdfObject* GetContentsForAppending() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfObject*>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetContentsForAppending_11>(
        __zz_cib_h_
      )
    );
  }
  const ::PoDoFo::PdfRect GetCropBox() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<const ::PoDoFo::PdfRect>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetCropBox_12>(
        __zz_cib_h_
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_13>(
      __zz_cib_h_
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfPage)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class460::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfPage> : public ::PoDoFo::PdfPage {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfPage>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfPage::PdfPage;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfPage>(__zz_cib_proxy, __zz_cib_mtbl, *__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rSize, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfPage>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rSize),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rSize, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfPage>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rSize),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_3(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject, __zz_cib_AbiType_t<const std::deque<PdfObject*>&> listOfParents) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfPage>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject),
    __zz_cib_::__zz_cib_FromAbiType<const std::deque<PdfObject*>&>(listOfParents));
  }
  static void __zz_cib_decl __zz_cib_delete_4(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfRect> __zz_cib_decl GetPageSize_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetPageSize()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl SetPageWidth_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> newWidth) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfPage::SetPageWidth(
        __zz_cib_::__zz_cib_FromAbiType<int>(newWidth)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl SetPageHeight_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> newHeight) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfPage::SetPageHeight(
        __zz_cib_::__zz_cib_FromAbiType<int>(newHeight)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetTrimBox_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rSize) {
    __zz_cib_obj->::PoDoFo::PdfPage::SetTrimBox(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rSize)
    );
  }
  static __zz_cib_AbiType_t<unsigned int> __zz_cib_decl GetPageNumber_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<unsigned int>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetPageNumber()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRect> __zz_cib_decl CreateStandardPageSize_10(__zz_cib_AbiType_t<const ::PoDoFo::EPdfPageSize> ePageSize, __zz_cib_AbiType_t<bool> bLandscape) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRect>(
      ::PoDoFo::PdfPage::CreateStandardPageSize(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::EPdfPageSize>(ePageSize),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bLandscape)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetContents_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetContents()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetContentsForAppending_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetContentsForAppending()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetResources_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetResources()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfRect> __zz_cib_decl GetMediaBox_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetMediaBox()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfRect> __zz_cib_decl GetCropBox_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetCropBox()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfRect> __zz_cib_decl GetTrimBox_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetTrimBox()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfRect> __zz_cib_decl GetBleedBox_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetBleedBox()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfRect> __zz_cib_decl GetArtBox_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetArtBox()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetRotation_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetRotation()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetRotation_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nRotation) {
    __zz_cib_obj->::PoDoFo::PdfPage::SetRotation(
      __zz_cib_::__zz_cib_FromAbiType<int>(nRotation)
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetNumAnnots_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetNumAnnots()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*> __zz_cib_decl CreateAnnotation_22(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfAnnotation> eType, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfAnnotation*>(
      __zz_cib_obj->::PoDoFo::PdfPage::CreateAnnotation(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfAnnotation>(eType),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*> __zz_cib_decl GetAnnotation_23(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> index) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfAnnotation*>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetAnnotation(
        __zz_cib_::__zz_cib_FromAbiType<int>(index)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DeleteAnnotation_24(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> index) {
    __zz_cib_obj->::PoDoFo::PdfPage::DeleteAnnotation(
      __zz_cib_::__zz_cib_FromAbiType<int>(index)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DeleteAnnotation_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> ref) {
    __zz_cib_obj->::PoDoFo::PdfPage::DeleteAnnotation(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(ref)
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetNumFields_26(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetNumFields()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfField> __zz_cib_decl GetField_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> index) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfField>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetField(
        __zz_cib_::__zz_cib_FromAbiType<int>(index)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfField> __zz_cib_decl GetField_28(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> index) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfField>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetField(
        __zz_cib_::__zz_cib_FromAbiType<int>(index)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetFromResources_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> rType, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> rKey) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetFromResources(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(rType),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(rKey)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> __zz_cib_decl GetInheritedKey_30(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> rName) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetInheritedKey(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(rName)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetOwnAnnotationsArray_31(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bCreate, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDocument) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetOwnAnnotationsArray(
        __zz_cib_::__zz_cib_FromAbiType<bool>(bCreate),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDocument)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetICCProfile_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszCSTag, __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> pStream, __zz_cib_AbiType_t<::PoDoFo::pdf_int64> nColorComponents, __zz_cib_AbiType_t<::PoDoFo::EPdfColorSpace> eAlternateColorSpace) {
    __zz_cib_obj->::PoDoFo::PdfPage::SetICCProfile(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszCSTag),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(pStream),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(nColorComponents),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfColorSpace>(eAlternateColorSpace)
    );
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class418(::PoDoFo::PdfPage* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfPage* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfPage*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfCanvas* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class335(::PoDoFo::PdfPage* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfPage* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class335(::PoDoFo::PdfCanvas* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfPage*>(__zz_cib_obj);
  }
  static std::uint32_t __zz_cib_decl __zz_cib_get_class_id(::PoDoFo::PdfPage** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfPage))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class460::__zz_cib_classid;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class460::__zz_cib_classid;
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class460 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_new_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_delete_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetPageSize_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::SetPageWidth_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::SetPageHeight_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::SetTrimBox_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetPageNumber_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::CreateStandardPageSize_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetContents_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetContentsForAppending_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetResources_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetMediaBox_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetCropBox_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetTrimBox_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetBleedBox_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetArtBox_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetRotation_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::SetRotation_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetNumAnnots_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::CreateAnnotation_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetAnnotation_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::DeleteAnnotation_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::DeleteAnnotation_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetNumFields_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetField_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetField_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetFromResources_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetInheritedKey_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetOwnAnnotationsArray_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::SetICCProfile_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_cast_to___zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_cast_from___zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_cast_to___zz_cib_Class335),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_cast_from___zz_cib_Class335),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_get_class_id),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 39 };
  return &methodTable;
}
}}}
