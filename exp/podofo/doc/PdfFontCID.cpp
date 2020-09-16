#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfFontCID.h"
#include "podofo/doc/PdfFontMetrics.h"
#include "podofo/doc/PdfFontMetricsFreetype.h"

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfFontCID::PdfFontCID(__zz_cib_AbiType h)
  : ::PoDoFo::PdfFont(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class430(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontCID::PdfFontCID(PdfFontCID&& rhs)
  : ::PoDoFo::PdfFont(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontCID::~PdfFontCID() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_0(
    h
  );
}

PoDoFo::PdfFontCID::PdfFontCID(::PoDoFo::PdfFontMetrics* pMetrics, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfVecObjects* pParent, bool bEmbed, bool bSubset)
  : PoDoFo::PdfFontCID(__zz_cib_MyHelper::__zz_cib_new_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbed)>(std::move(bEmbed)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bSubset)>(std::move(bSubset))))
  {}

PoDoFo::PdfFontCID::PdfFontCID(::PoDoFo::PdfFontMetrics* pMetrics, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfObject* pObject, bool bEmbed)
  : PoDoFo::PdfFontCID(__zz_cib_MyHelper::__zz_cib_new_2(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbed)>(std::move(bEmbed))))
  {}

void PoDoFo::PdfFontCID::EmbedFont() {
  __zz_cib_MyHelper::EmbedFont_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void PoDoFo::PdfFontCID::EmbedSubsetFont() {
  __zz_cib_MyHelper::EmbedSubsetFont_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void PoDoFo::PdfFontCID::AddUsedSubsettingGlyphs(const ::PoDoFo::PdfString& sText, long lStringLen) {
  __zz_cib_MyHelper::AddUsedSubsettingGlyphs_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(sText)>(sText),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lStringLen)>(std::move(lStringLen))
  );
}

void PoDoFo::PdfFontCID::Init(bool bEmbed, bool bSubset) {
  __zz_cib_MyHelper::Init_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbed)>(std::move(bEmbed)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bSubset)>(std::move(bSubset))
  );
}

void PoDoFo::PdfFontCID::EmbedFont(::PoDoFo::PdfObject* pDescriptor) {
  __zz_cib_MyHelper::EmbedFont_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDescriptor)>(std::move(pDescriptor))
  );
}

void PoDoFo::PdfFontCID::MaybeUpdateBaseFontKey() {
  __zz_cib_MyHelper::MaybeUpdateBaseFontKey_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void PoDoFo::PdfFontCID::SetBold(bool bBold) {
  __zz_cib_MyHelper::SetBold_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bBold)>(std::move(bBold))
  );
}

void PoDoFo::PdfFontCID::SetItalic(bool bItalic) {
  __zz_cib_MyHelper::SetItalic_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bItalic)>(std::move(bItalic))
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFontCID> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfFontCID;
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetItalic_0(::PoDoFo::PdfFontCID* __zz_cib_obj, __zz_cib_AbiType_t<bool> bItalic) {
    __zz_cib_obj->SetItalic(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bItalic)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedFont_1(::PoDoFo::PdfFontCID* __zz_cib_obj) {
    __zz_cib_obj->EmbedFont();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedSubsetFont_2(::PoDoFo::PdfFontCID* __zz_cib_obj) {
    __zz_cib_obj->EmbedSubsetFont();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddUsedSubsettingGlyphs_3(::PoDoFo::PdfFontCID* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sText, __zz_cib_AbiType_t<long> lStringLen) {
    __zz_cib_obj->AddUsedSubsettingGlyphs(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sText),
      __zz_cib_::__zz_cib_FromAbiType<long>(lStringLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl WriteStringToStream_4(::PoDoFo::PdfFontCID* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsString, __zz_cib_AbiType_t<::PoDoFo::PdfStream*> pStream) {
    __zz_cib_obj->WriteStringToStream(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsString),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddUsedGlyphname_5(::PoDoFo::PdfFontCID* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszGlyphName) {
    __zz_cib_obj->AddUsedGlyphname(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszGlyphName)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBold_6(::PoDoFo::PdfFontCID* __zz_cib_obj, __zz_cib_AbiType_t<bool> bBold) {
    __zz_cib_obj->SetBold(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bBold)
    );
  }
  static void __zz_cib_decl __zz_cib_delete_7(::PoDoFo::PdfFontCID* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfFontCID>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class431 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::SetItalic_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::EmbedFont_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::EmbedSubsetFont_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::AddUsedSubsettingGlyphs_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::WriteStringToStream_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::AddUsedGlyphname_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::SetBold_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::__zz_cib_delete_7)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfFontCID>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class431::__zz_cib_GetMethodTable();
}
}

