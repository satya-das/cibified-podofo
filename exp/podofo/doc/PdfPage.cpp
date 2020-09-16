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

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfPage::PdfPage(__zz_cib_AbiType h)
  : ::PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class418(h))
  , ::PoDoFo::PdfCanvas(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class335(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfPage::PdfPage(PdfPage&& rhs)
  : ::PoDoFo::PdfElement(std::move(rhs))
  , ::PoDoFo::PdfCanvas(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfPage::PdfPage(const ::PoDoFo::PdfPage& __zz_cib_param0)
  : PoDoFo::PdfPage(__zz_cib_MyHelper::__zz_cib_copy_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

PoDoFo::PdfPage::PdfPage(const ::PoDoFo::PdfRect& rSize, ::PoDoFo::PdfDocument* pParent)
  : PoDoFo::PdfPage(__zz_cib_MyHelper::__zz_cib_new_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(rSize)>(rSize),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
  {}

PoDoFo::PdfPage::PdfPage(const ::PoDoFo::PdfRect& rSize, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfPage(__zz_cib_MyHelper::__zz_cib_new_2(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(rSize)>(rSize),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
  {}

PoDoFo::PdfPage::PdfPage(::PoDoFo::PdfObject* pObject, const std::deque<PdfObject*>& listOfParents)
  : PoDoFo::PdfPage(__zz_cib_MyHelper::__zz_cib_new_3(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(listOfParents)>(listOfParents)))
  {}

PoDoFo::PdfPage::~PdfPage() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_4(
    h
  );
}

const ::PoDoFo::PdfRect PoDoFo::PdfPage::GetPageSize() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::GetPageSize_5<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfPage::SetPageWidth(int newWidth) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::SetPageWidth_6<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(newWidth)>(std::move(newWidth))
    )
  );
}

bool PoDoFo::PdfPage::SetPageHeight(int newHeight) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::SetPageHeight_7<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(newHeight)>(std::move(newHeight))
    )
  );
}

void PoDoFo::PdfPage::SetTrimBox(const ::PoDoFo::PdfRect& rSize) {
  __zz_cib_MyHelper::SetTrimBox_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rSize)>(rSize)
  );
}

unsigned int PoDoFo::PdfPage::GetPageNumber() const {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned int>(
    __zz_cib_MyHelper::GetPageNumber_9<__zz_cib_::__zz_cib_AbiType_t<unsigned int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfRect PoDoFo::PdfPage::CreateStandardPageSize(const ::PoDoFo::EPdfPageSize ePageSize, bool bLandscape) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::CreateStandardPageSize_10<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(ePageSize)>(std::move(ePageSize)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bLandscape)>(std::move(bLandscape))
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfPage::GetContents() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetContents_11<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfPage::GetContentsForAppending() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetContentsForAppending_12<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfPage::GetResources() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetResources_13<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfRect PoDoFo::PdfPage::GetMediaBox() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::GetMediaBox_14<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfRect PoDoFo::PdfPage::GetCropBox() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::GetCropBox_15<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfRect PoDoFo::PdfPage::GetTrimBox() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::GetTrimBox_16<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfRect PoDoFo::PdfPage::GetBleedBox() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::GetBleedBox_17<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfRect PoDoFo::PdfPage::GetArtBox() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::GetArtBox_18<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int PoDoFo::PdfPage::GetRotation() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetRotation_19<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfPage::SetRotation(int nRotation) {
  __zz_cib_MyHelper::SetRotation_20<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nRotation)>(std::move(nRotation))
  );
}

int PoDoFo::PdfPage::GetNumAnnots() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetNumAnnots_21<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfAnnotation* PoDoFo::PdfPage::CreateAnnotation(::PoDoFo::EPdfAnnotation eType, const ::PoDoFo::PdfRect& rRect) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAnnotation*>(
    __zz_cib_MyHelper::CreateAnnotation_22<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eType)>(std::move(eType)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect)
    )
  );
}

::PoDoFo::PdfAnnotation* PoDoFo::PdfPage::GetAnnotation(int index) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAnnotation*>(
    __zz_cib_MyHelper::GetAnnotation_23<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(index)>(std::move(index))
    )
  );
}

void PoDoFo::PdfPage::DeleteAnnotation(int index) {
  __zz_cib_MyHelper::DeleteAnnotation_24<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(index)>(std::move(index))
  );
}

void PoDoFo::PdfPage::DeleteAnnotation(const ::PoDoFo::PdfReference& ref) {
  __zz_cib_MyHelper::DeleteAnnotation_25<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(ref)>(ref)
  );
}

int PoDoFo::PdfPage::GetNumFields() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetNumFields_26<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfField PoDoFo::PdfPage::GetField(int index) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfField>(
    __zz_cib_MyHelper::GetField_27<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfField>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(index)>(std::move(index))
    )
  );
}

const ::PoDoFo::PdfField PoDoFo::PdfPage::GetField(int index) const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfField>(
    __zz_cib_MyHelper::GetField_28<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfField>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(index)>(std::move(index))
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfPage::GetFromResources(const ::PoDoFo::PdfName& rType, const ::PoDoFo::PdfName& rKey) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetFromResources_29<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rType)>(rType),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rKey)>(rKey)
    )
  );
}

const ::PoDoFo::PdfObject* PoDoFo::PdfPage::GetInheritedKey(const ::PoDoFo::PdfName& rName) const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetInheritedKey_30<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rName)>(rName)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfPage::GetOwnAnnotationsArray(bool bCreate, ::PoDoFo::PdfDocument* pDocument) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetOwnAnnotationsArray_31<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bCreate)>(std::move(bCreate)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDocument)>(std::move(pDocument))
    )
  );
}

void PoDoFo::PdfPage::SetICCProfile(const char* pszCSTag, ::PoDoFo::PdfInputStream* pStream, ::PoDoFo::pdf_int64 nColorComponents, ::PoDoFo::EPdfColorSpace eAlternateColorSpace) {
  __zz_cib_MyHelper::SetICCProfile_32<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszCSTag)>(std::move(pszCSTag)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nColorComponents)>(std::move(nColorComponents)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eAlternateColorSpace)>(std::move(eAlternateColorSpace))
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfPage> : public ::PoDoFo::PdfPage {
  __zz_cib_AbiType __zz_cib_h_;

  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class460::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFo_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class460::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfPage(h), __zz_cib_h_(h) {}
public:
  static ::PoDoFo::PdfPage* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  void SetICCProfile(const char* pszCSTag, ::PoDoFo::PdfInputStream* pStream, ::PoDoFo::pdf_int64 nColorComponents, ::PoDoFo::EPdfColorSpace eAlternateColorSpace) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pszCSTag)>, __zz_cib_AbiType_t<decltype(pStream)>, __zz_cib_AbiType_t<decltype(nColorComponents)>, __zz_cib_AbiType_t<decltype(eAlternateColorSpace)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::SetICCProfile_32>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszCSTag)>(std::move(pszCSTag)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nColorComponents)>(std::move(nColorComponents)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eAlternateColorSpace)>(std::move(eAlternateColorSpace))
    );
  }
  void SetRotation(int nRotation) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(nRotation)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::SetRotation_20>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(nRotation)>(std::move(nRotation))
    );
  }
  const ::PoDoFo::PdfRect GetArtBox() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<const ::PoDoFo::PdfRect>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetArtBox_18>(
        __zz_cib_h_
      )
    );
  }
  const ::PoDoFo::PdfRect GetTrimBox() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<const ::PoDoFo::PdfRect>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetTrimBox_16>(
        __zz_cib_h_
      )
    );
  }
  ::PoDoFo::PdfObject* GetContents() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfObject*>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetContents_11>(
        __zz_cib_h_
      )
    );
  }
  int GetNumAnnots() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetNumAnnots_21>(
        __zz_cib_h_
      )
    );
  }
  ::PoDoFo::PdfObject* GetResources() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfObject*>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetResources_13>(
        __zz_cib_h_
      )
    );
  }
  const ::PoDoFo::PdfRect GetMediaBox() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<const ::PoDoFo::PdfRect>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetMediaBox_14>(
        __zz_cib_h_
      )
    );
  }
  const ::PoDoFo::PdfRect GetPageSize() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<const ::PoDoFo::PdfRect>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetPageSize_5>(
        __zz_cib_h_
      )
    );
  }
  int GetRotation() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetRotation_19>(
        __zz_cib_h_
      )
    );
  }
  const ::PoDoFo::PdfRect GetBleedBox() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<const ::PoDoFo::PdfRect>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetBleedBox_17>(
        __zz_cib_h_
      )
    );
  }
  ::PoDoFo::PdfObject* GetContentsForAppending() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfObject*>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetContentsForAppending_12>(
        __zz_cib_h_
      )
    );
  }
  const ::PoDoFo::PdfRect GetCropBox() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<const ::PoDoFo::PdfRect>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetCropBox_15>(
        __zz_cib_h_
      )
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfPage* __zz_cib_Helper<::PoDoFo::PdfPage>::__zz_cib_create_proxy(__zz_cib_AbiType h) {
  switch(__zz_cib_get_class_id(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class460::__zz_cib_classid:
    return new ::PoDoFo::PdfPage(h);
  default: break;
  }
  return ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfPage>::__zz_cib_from_handle(h);
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfPage> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfPage;
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetICCProfile_0(::PoDoFo::PdfPage* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszCSTag, __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> pStream, __zz_cib_AbiType_t<::PoDoFo::pdf_int64> nColorComponents, __zz_cib_AbiType_t<::PoDoFo::EPdfColorSpace> eAlternateColorSpace) {
    __zz_cib_obj->SetICCProfile(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszCSTag),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(pStream),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(nColorComponents),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfColorSpace>(eAlternateColorSpace)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetRotation_1(::PoDoFo::PdfPage* __zz_cib_obj, __zz_cib_AbiType_t<int> nRotation) {
    __zz_cib_obj->SetRotation(
      __zz_cib_::__zz_cib_FromAbiType<int>(nRotation)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfRect> __zz_cib_decl GetArtBox_2(const ::PoDoFo::PdfPage* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_obj->GetArtBox()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfRect> __zz_cib_decl GetTrimBox_3(const ::PoDoFo::PdfPage* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_obj->GetTrimBox()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetContents_4(const ::PoDoFo::PdfPage* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->GetContents()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetNumAnnots_5(const ::PoDoFo::PdfPage* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->GetNumAnnots()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetResources_6(const ::PoDoFo::PdfPage* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->GetResources()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfRect> __zz_cib_decl GetMediaBox_7(const ::PoDoFo::PdfPage* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_obj->GetMediaBox()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfRect> __zz_cib_decl GetPageSize_8(const ::PoDoFo::PdfPage* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_obj->GetPageSize()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetRotation_9(const ::PoDoFo::PdfPage* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->GetRotation()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfRect> __zz_cib_decl GetBleedBox_10(const ::PoDoFo::PdfPage* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_obj->GetBleedBox()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetContentsForAppending_11(const ::PoDoFo::PdfPage* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->GetContentsForAppending()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfRect> __zz_cib_decl GetCropBox_12(const ::PoDoFo::PdfPage* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_obj->GetCropBox()
    );
  }
  static void __zz_cib_decl __zz_cib_delete_13(::PoDoFo::PdfPage* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfPage>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class460 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::SetICCProfile_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::SetRotation_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetArtBox_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetTrimBox_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetContents_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetNumAnnots_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetResources_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetMediaBox_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetPageSize_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetRotation_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetBleedBox_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetContentsForAppending_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetCropBox_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_delete_13)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 14 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfPage>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class460::__zz_cib_GetMethodTable();
}
}

