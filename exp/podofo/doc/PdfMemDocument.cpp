#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfParser.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfRefCountedInputDevice.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/base/PdfWriter.h"
#include "podofo/doc/PdfAcroForm.h"
#include "podofo/doc/PdfDestination.h"
#include "podofo/doc/PdfFileSpec.h"
#include "podofo/doc/PdfFont.h"
#include "podofo/doc/PdfInfo.h"
#include "podofo/doc/PdfMemDocument.h"
#include "podofo/doc/PdfNamesTree.h"
#include "podofo/doc/PdfOutlines.h"
#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfPagesTree.h"
#include <vector>

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfMemDocument::PdfMemDocument(__zz_cib_AbiType h)
  : ::PoDoFo::PdfDocument(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class417(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfMemDocument::PdfMemDocument(PdfMemDocument&& rhs)
  : ::PoDoFo::PdfDocument(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfMemDocument::PdfMemDocument()
  : PoDoFo::PdfMemDocument(__zz_cib_MyHelper::__zz_cib_new_0(
    this))
  {}

PoDoFo::PdfMemDocument::PdfMemDocument(bool bOnlyTrailer)
  : PoDoFo::PdfMemDocument(__zz_cib_MyHelper::__zz_cib_new_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(bOnlyTrailer)>(std::move(bOnlyTrailer))))
  {}

PoDoFo::PdfMemDocument::PdfMemDocument(const char* pszFilename, bool bForUpdate)
  : PoDoFo::PdfMemDocument(__zz_cib_MyHelper::__zz_cib_new_2(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bForUpdate)>(std::move(bForUpdate))))
  {}

PoDoFo::PdfMemDocument::~PdfMemDocument() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_3(
    h
  );
}

void PoDoFo::PdfMemDocument::Load(const char* pszFilename, bool bForUpdate) {
  __zz_cib_MyHelper::Load_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bForUpdate)>(std::move(bForUpdate))
  );
}

void PoDoFo::PdfMemDocument::LoadFromBuffer(const char* pBuffer, long lLen, bool bForUpdate) {
  __zz_cib_MyHelper::LoadFromBuffer_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bForUpdate)>(std::move(bForUpdate))
  );
}

void PoDoFo::PdfMemDocument::LoadFromDevice(const ::PoDoFo::PdfRefCountedInputDevice& rDevice, bool bForUpdate) {
  __zz_cib_MyHelper::LoadFromDevice_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rDevice)>(rDevice),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bForUpdate)>(std::move(bForUpdate))
  );
}

bool PoDoFo::PdfMemDocument::IsLoaded() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsLoaded_7<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfMemDocument::Write(const char* pszFilename) {
  __zz_cib_MyHelper::Write_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename))
  );
}

void PoDoFo::PdfMemDocument::Write(::PoDoFo::PdfOutputDevice* pDevice) {
  __zz_cib_MyHelper::Write_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice))
  );
}

void PoDoFo::PdfMemDocument::WriteUpdate(const char* pszFilename) {
  __zz_cib_MyHelper::WriteUpdate_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename))
  );
}

void PoDoFo::PdfMemDocument::WriteUpdate(::PoDoFo::PdfOutputDevice* pDevice, bool bTruncate) {
  __zz_cib_MyHelper::WriteUpdate_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bTruncate)>(std::move(bTruncate))
  );
}

void PoDoFo::PdfMemDocument::SetWriteMode(::PoDoFo::EPdfWriteMode eWriteMode) {
  __zz_cib_MyHelper::SetWriteMode_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode))
  );
}

::PoDoFo::EPdfWriteMode PoDoFo::PdfMemDocument::GetWriteMode() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(
    __zz_cib_MyHelper::GetWriteMode_13<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfMemDocument::SetPdfVersion(::PoDoFo::EPdfVersion eVersion) {
  __zz_cib_MyHelper::SetPdfVersion_14<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eVersion)>(std::move(eVersion))
  );
}

::PoDoFo::EPdfVersion PoDoFo::PdfMemDocument::GetPdfVersion() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfVersion>(
    __zz_cib_MyHelper::GetPdfVersion_15<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfVersion>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfMemDocument::AddPdfExtension(const char* ns, ::PoDoFo::pdf_int64 level) {
  __zz_cib_MyHelper::AddPdfExtension_16<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(ns)>(std::move(ns)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(level)>(std::move(level))
  );
}

bool PoDoFo::PdfMemDocument::HasPdfExtension(const char* ns, ::PoDoFo::pdf_int64 level) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::HasPdfExtension_17<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ns)>(std::move(ns)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(level)>(std::move(level))
    )
  );
}

void PoDoFo::PdfMemDocument::RemovePdfExtension(const char* ns, ::PoDoFo::pdf_int64 level) {
  __zz_cib_MyHelper::RemovePdfExtension_18<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(ns)>(std::move(ns)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(level)>(std::move(level))
  );
}

::std::vector<::PoDoFo::PdfExtension> PoDoFo::PdfMemDocument::GetPdfExtensions() const {
  return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>>(
    __zz_cib_MyHelper::GetPdfExtensions_19<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfMemDocument::SetPassword(const std::string& sPassword) {
  __zz_cib_MyHelper::SetPassword_20<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(sPassword)>(sPassword)
  );
}

void PoDoFo::PdfMemDocument::SetEncrypted(const std::string& userPassword, const std::string& ownerPassword, int protection, ::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm eAlgorithm, ::PoDoFo::PdfEncrypt::EPdfKeyLength eKeyLength) {
  __zz_cib_MyHelper::SetEncrypted_21<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(userPassword)>(userPassword),
    __zz_cib_::__zz_cib_ToAbiType<decltype(ownerPassword)>(ownerPassword),
    __zz_cib_::__zz_cib_ToAbiType<decltype(protection)>(std::move(protection)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eAlgorithm)>(std::move(eAlgorithm)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eKeyLength)>(std::move(eKeyLength))
  );
}

void PoDoFo::PdfMemDocument::SetEncrypted(const ::PoDoFo::PdfEncrypt& pEncrypt) {
  __zz_cib_MyHelper::SetEncrypted_22<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(pEncrypt)
  );
}

bool PoDoFo::PdfMemDocument::GetEncrypted() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetEncrypted_23<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfMemDocument::IsLinearized() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsLinearized_24<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfVecObjects& PoDoFo::PdfMemDocument::GetObjects() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfVecObjects&>(
    __zz_cib_MyHelper::GetObjects_25<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfVecObjects&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfVecObjects& PoDoFo::PdfMemDocument::GetObjects() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects&>(
    __zz_cib_MyHelper::GetObjects_26<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfMemDocument::GetCatalog() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetCatalog_27<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfObject* PoDoFo::PdfMemDocument::GetCatalog() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetCatalog_28<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfObject* PoDoFo::PdfMemDocument::GetTrailer() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetTrailer_29<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfMemDocument::GetStructTreeRoot() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetStructTreeRoot_30<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfMemDocument::GetMetadata() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetMetadata_31<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfMemDocument::GetMarkInfo() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetMarkInfo_32<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfMemDocument::GetLanguage() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetLanguage_33<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfFont* PoDoFo::PdfMemDocument::GetFont(::PoDoFo::PdfObject* pObject) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
    __zz_cib_MyHelper::GetFont_34<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFont*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))
    )
  );
}

const ::PoDoFo::PdfMemDocument& PoDoFo::PdfMemDocument::InsertPages(const ::PoDoFo::PdfMemDocument& rDoc, int inFirstPage, int inNumPages) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfMemDocument&>(
    __zz_cib_MyHelper::InsertPages_35<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfMemDocument&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDoc)>(rDoc),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inFirstPage)>(std::move(inFirstPage)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inNumPages)>(std::move(inNumPages))
    )
  );
}

void PoDoFo::PdfMemDocument::DeletePages(int inFirstPage, int inNumPages) {
  __zz_cib_MyHelper::DeletePages_36<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(inFirstPage)>(std::move(inFirstPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(inNumPages)>(std::move(inNumPages))
  );
}

bool PoDoFo::PdfMemDocument::IsPrintAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsPrintAllowed_37<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfMemDocument::IsEditAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsEditAllowed_38<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfMemDocument::IsCopyAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsCopyAllowed_39<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfMemDocument::IsEditNotesAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsEditNotesAllowed_40<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfMemDocument::IsFillAndSignAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsFillAndSignAllowed_41<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfMemDocument::IsAccessibilityAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsAccessibilityAllowed_42<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfMemDocument::IsDocAssemblyAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsDocAssemblyAllowed_43<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfMemDocument::IsHighPrintAllowed() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsHighPrintAllowed_44<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfMemDocument::FreeObjectMemory(const ::PoDoFo::PdfReference& rRef, bool bForce) {
  __zz_cib_MyHelper::FreeObjectMemory_45<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRef)>(rRef),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bForce)>(std::move(bForce))
  );
}

void PoDoFo::PdfMemDocument::FreeObjectMemory(::PoDoFo::PdfObject* pObj, bool bForce) {
  __zz_cib_MyHelper::FreeObjectMemory_46<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pObj)>(std::move(pObj)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bForce)>(std::move(bForce))
  );
}

const ::PoDoFo::PdfEncrypt* PoDoFo::PdfMemDocument::GetEncrypt() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncrypt*>(
    __zz_cib_MyHelper::GetEncrypt_47<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfMemDocument> : public ::PoDoFo::PdfMemDocument {
  __zz_cib_AbiType __zz_cib_h_;

  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class456::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFo_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class456::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfMemDocument(h), __zz_cib_h_(h) {}
public:
  static ::PoDoFo::PdfMemDocument* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  bool IsDocAssemblyAllowed() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::IsDocAssemblyAllowed_43>(
        __zz_cib_h_
      )
    );
  }
  bool IsHighPrintAllowed() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::IsHighPrintAllowed_44>(
        __zz_cib_h_
      )
    );
  }
  bool IsFillAndSignAllowed() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::IsFillAndSignAllowed_41>(
        __zz_cib_h_
      )
    );
  }
  bool IsEditNotesAllowed() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::IsEditNotesAllowed_40>(
        __zz_cib_h_
      )
    );
  }
  ::PoDoFo::EPdfWriteMode GetWriteMode() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetWriteMode_13>(
        __zz_cib_h_
      )
    );
  }
  bool IsCopyAllowed() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::IsCopyAllowed_39>(
        __zz_cib_h_
      )
    );
  }
  bool IsPrintAllowed() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::IsPrintAllowed_37>(
        __zz_cib_h_
      )
    );
  }
  bool IsAccessibilityAllowed() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::IsAccessibilityAllowed_42>(
        __zz_cib_h_
      )
    );
  }
  bool IsEditAllowed() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::IsEditAllowed_38>(
        __zz_cib_h_
      )
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfMemDocument* __zz_cib_Helper<::PoDoFo::PdfMemDocument>::__zz_cib_create_proxy(__zz_cib_AbiType h) {
  switch(__zz_cib_get_class_id(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class456::__zz_cib_classid:
    return new ::PoDoFo::PdfMemDocument(h);
  default: break;
  }
  return ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfMemDocument>::__zz_cib_from_handle(h);
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfMemDocument> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfMemDocument;
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsDocAssemblyAllowed_0(const ::PoDoFo::PdfMemDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsDocAssemblyAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsHighPrintAllowed_1(const ::PoDoFo::PdfMemDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsHighPrintAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsFillAndSignAllowed_2(const ::PoDoFo::PdfMemDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsFillAndSignAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsEditNotesAllowed_3(const ::PoDoFo::PdfMemDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsEditNotesAllowed()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> __zz_cib_decl GetWriteMode_5(const ::PoDoFo::PdfMemDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfWriteMode>(
      __zz_cib_obj->GetWriteMode()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsCopyAllowed_7(const ::PoDoFo::PdfMemDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsCopyAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsPrintAllowed_8(const ::PoDoFo::PdfMemDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsPrintAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsAccessibilityAllowed_9(const ::PoDoFo::PdfMemDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsAccessibilityAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsEditAllowed_10(const ::PoDoFo::PdfMemDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsEditAllowed()
    );
  }
  static void __zz_cib_decl __zz_cib_delete_11(::PoDoFo::PdfMemDocument* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfMemDocument>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class456 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::IsDocAssemblyAllowed_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::IsHighPrintAllowed_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::IsFillAndSignAllowed_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::IsEditNotesAllowed_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::GetPdfVersion_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::GetWriteMode_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::IsLinearized_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::IsCopyAllowed_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::IsPrintAllowed_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::IsAccessibilityAllowed_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::IsEditAllowed_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::__zz_cib_delete_11)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 12 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfMemDocument>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class456::__zz_cib_GetMethodTable();
}
}

