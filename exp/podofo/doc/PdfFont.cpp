#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfStream.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/base/PdfWriter.h"
#include "podofo/doc/PdfFont.h"
#include "podofo/doc/PdfFontCID.h"
#include "podofo/doc/PdfFontFactory.h"
#include "podofo/doc/PdfFontMetrics.h"
#include "podofo/doc/PdfFontSimple.h"
#include "podofo/doc/PdfFontTrueType.h"
#include "podofo/doc/PdfFontType1.h"
#include "podofo/doc/PdfFontType1Base14.h"
#include "podofo/doc/PdfFontType3.h"
#include "podofo/doc/PdfPage.h"

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfFont::PdfFont(__zz_cib_AbiType h)
  : ::PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class418(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfFont::PdfFont(PdfFont&& rhs)
  : ::PoDoFo::PdfElement(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfFont::PdfFont(::PoDoFo::PdfFontMetrics* pMetrics, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfFont(__zz_cib_MyHelper::__zz_cib_new_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
  {}

PoDoFo::PdfFont::PdfFont(::PoDoFo::PdfFontMetrics* pMetrics, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfObject* pObject)
  : PoDoFo::PdfFont(__zz_cib_MyHelper::__zz_cib_new_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))))
  {}

PoDoFo::PdfFont::~PdfFont() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_2(
    h
  );
}

void PoDoFo::PdfFont::SetFontSize(float fSize) {
  __zz_cib_MyHelper::SetFontSize_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(fSize)>(std::move(fSize))
  );
}

float PoDoFo::PdfFont::GetFontSize() const {
  return __zz_cib_::__zz_cib_FromAbiType<float>(
    __zz_cib_MyHelper::GetFontSize_4<__zz_cib_::__zz_cib_AbiType_t<float>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFont::SetFontScale(float fScale) {
  __zz_cib_MyHelper::SetFontScale_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(fScale)>(std::move(fScale))
  );
}

float PoDoFo::PdfFont::GetFontScale() const {
  return __zz_cib_::__zz_cib_FromAbiType<float>(
    __zz_cib_MyHelper::GetFontScale_6<__zz_cib_::__zz_cib_AbiType_t<float>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFont::SetFontCharSpace(float fCharSpace) {
  __zz_cib_MyHelper::SetFontCharSpace_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(fCharSpace)>(std::move(fCharSpace))
  );
}

float PoDoFo::PdfFont::GetFontCharSpace() const {
  return __zz_cib_::__zz_cib_FromAbiType<float>(
    __zz_cib_MyHelper::GetFontCharSpace_8<__zz_cib_::__zz_cib_AbiType_t<float>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFont::SetWordSpace(float fWordSpace) {
  __zz_cib_MyHelper::SetWordSpace_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(fWordSpace)>(std::move(fWordSpace))
  );
}

float PoDoFo::PdfFont::GetWordSpace() const {
  return __zz_cib_::__zz_cib_FromAbiType<float>(
    __zz_cib_MyHelper::GetWordSpace_10<__zz_cib_::__zz_cib_AbiType_t<float>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFont::SetUnderlined(bool bUnder) {
  __zz_cib_MyHelper::SetUnderlined_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bUnder)>(std::move(bUnder))
  );
}

bool PoDoFo::PdfFont::IsUnderlined() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsUnderlined_12<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfFont::IsBold() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsBold_13<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfFont::IsItalic() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsItalic_14<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFont::SetStrikeOut(bool bStrikeOut) {
  __zz_cib_MyHelper::SetStrikeOut_15<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bStrikeOut)>(std::move(bStrikeOut))
  );
}

bool PoDoFo::PdfFont::IsStrikeOut() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsStrikeOut_16<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfName& PoDoFo::PdfFont::GetIdentifier() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
    __zz_cib_MyHelper::GetIdentifier_17<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfName&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfEncoding* PoDoFo::PdfFont::GetEncoding() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(
    __zz_cib_MyHelper::GetEncoding_18<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfFontMetrics* PoDoFo::PdfFont::GetFontMetrics() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFontMetrics*>(
    __zz_cib_MyHelper::GetFontMetrics_19<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfFontMetrics*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfFontMetrics* PoDoFo::PdfFont::GetFontMetrics2() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFontMetrics*>(
    __zz_cib_MyHelper::GetFontMetrics2_20<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFontMetrics*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFont::WriteStringToStream(const ::PoDoFo::PdfString& rsString, ::PoDoFo::PdfStream* pStream) {
  __zz_cib_MyHelper::WriteStringToStream_21<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rsString)>(rsString),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
  );
}

void PoDoFo::PdfFont::EmbedFont() {
  __zz_cib_MyHelper::EmbedFont_22<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void PoDoFo::PdfFont::AddUsedSubsettingGlyphs(const ::PoDoFo::PdfString& sText, long lStringLen) {
  __zz_cib_MyHelper::AddUsedSubsettingGlyphs_23<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(sText)>(sText),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lStringLen)>(std::move(lStringLen))
  );
}

void PoDoFo::PdfFont::AddUsedGlyphname(const char* pszGlyphName) {
  __zz_cib_MyHelper::AddUsedGlyphname_24<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszGlyphName)>(std::move(pszGlyphName))
  );
}

void PoDoFo::PdfFont::EmbedSubsetFont() {
  __zz_cib_MyHelper::EmbedSubsetFont_25<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

bool PoDoFo::PdfFont::IsSubsetting() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsSubsetting_26<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfName& PoDoFo::PdfFont::GetBaseFont() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
    __zz_cib_MyHelper::GetBaseFont_27<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfName&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFont::InitBase14Font() {
  __zz_cib_MyHelper::InitBase14Font_28<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void PoDoFo::PdfFont::SetBold(bool bBold) {
  __zz_cib_MyHelper::SetBold_29<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bBold)>(std::move(bBold))
  );
}

void PoDoFo::PdfFont::SetItalic(bool bItalic) {
  __zz_cib_MyHelper::SetItalic_30<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bItalic)>(std::move(bItalic))
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfFont> : public ::PoDoFo::PdfFont {
  __zz_cib_AbiType __zz_cib_h_;

  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class430::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFo_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class430::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfFont(h), __zz_cib_h_(h) {}
public:
  static ::PoDoFo::PdfFont* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  void SetItalic(bool bItalic) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(bItalic)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::SetItalic_30>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(bItalic)>(std::move(bItalic))
    );
  }
  void EmbedFont() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::EmbedFont_22>(
      __zz_cib_h_
    );
  }
  void EmbedSubsetFont() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::EmbedSubsetFont_25>(
      __zz_cib_h_
    );
  }
  void AddUsedSubsettingGlyphs(const ::PoDoFo::PdfString& sText, long lStringLen) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(sText)>, __zz_cib_AbiType_t<decltype(lStringLen)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::AddUsedSubsettingGlyphs_23>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(sText)>(sText),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lStringLen)>(std::move(lStringLen))
    );
  }
  void WriteStringToStream(const ::PoDoFo::PdfString& rsString, ::PoDoFo::PdfStream* pStream) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(rsString)>, __zz_cib_AbiType_t<decltype(pStream)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::WriteStringToStream_21>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsString)>(rsString),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
    );
  }
  void AddUsedGlyphname(const char* pszGlyphName) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pszGlyphName)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::AddUsedGlyphname_24>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszGlyphName)>(std::move(pszGlyphName))
    );
  }
  void SetBold(bool bBold) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(bBold)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::SetBold_29>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(bBold)>(std::move(bBold))
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfFont* __zz_cib_Helper<::PoDoFo::PdfFont>::__zz_cib_create_proxy(__zz_cib_AbiType h) {
  switch(__zz_cib_get_class_id(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class431::__zz_cib_classid:
    return __zz_cib_Helper<PoDoFo::PdfFontCID>::__zz_cib_from_handle(
      __zz_cib_Helper<PoDoFo::PdfFontCID>::__zz_cib_cast_from___zz_cib_Class430(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class443::__zz_cib_classid:
    return __zz_cib_Helper<PoDoFo::PdfFontTrueType>::__zz_cib_from_handle(
      __zz_cib_Helper<PoDoFo::PdfFontTrueType>::__zz_cib_cast_from___zz_cib_Class430(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class444::__zz_cib_classid:
    return __zz_cib_Helper<PoDoFo::PdfFontType1>::__zz_cib_from_handle(
      __zz_cib_Helper<PoDoFo::PdfFontType1>::__zz_cib_cast_from___zz_cib_Class430(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class446::__zz_cib_classid:
    return __zz_cib_Helper<PoDoFo::PdfFontType1Base14>::__zz_cib_from_handle(
      __zz_cib_Helper<PoDoFo::PdfFontType1Base14>::__zz_cib_cast_from___zz_cib_Class430(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class447::__zz_cib_classid:
    return __zz_cib_Helper<PoDoFo::PdfFontType3>::__zz_cib_from_handle(
      __zz_cib_Helper<PoDoFo::PdfFontType3>::__zz_cib_cast_from___zz_cib_Class430(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class441::__zz_cib_classid:
    return __zz_cib_Helper<PoDoFo::PdfFontSimple>::__zz_cib_from_handle(
      __zz_cib_Helper<PoDoFo::PdfFontSimple>::__zz_cib_cast_from___zz_cib_Class430(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class430::__zz_cib_classid:
    return new ::PoDoFo::PdfFont(h);
  default: break;
  }
  return ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFont>::__zz_cib_from_handle(h);
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFont> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfFont;
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetItalic_0(::PoDoFo::PdfFont* __zz_cib_obj, __zz_cib_AbiType_t<bool> bItalic) {
    __zz_cib_obj->SetItalic(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bItalic)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedFont_1(::PoDoFo::PdfFont* __zz_cib_obj) {
    __zz_cib_obj->EmbedFont();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedSubsetFont_2(::PoDoFo::PdfFont* __zz_cib_obj) {
    __zz_cib_obj->EmbedSubsetFont();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddUsedSubsettingGlyphs_3(::PoDoFo::PdfFont* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sText, __zz_cib_AbiType_t<long> lStringLen) {
    __zz_cib_obj->AddUsedSubsettingGlyphs(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sText),
      __zz_cib_::__zz_cib_FromAbiType<long>(lStringLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl WriteStringToStream_4(::PoDoFo::PdfFont* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsString, __zz_cib_AbiType_t<::PoDoFo::PdfStream*> pStream) {
    __zz_cib_obj->WriteStringToStream(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsString),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddUsedGlyphname_5(::PoDoFo::PdfFont* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszGlyphName) {
    __zz_cib_obj->AddUsedGlyphname(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszGlyphName)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBold_6(::PoDoFo::PdfFont* __zz_cib_obj, __zz_cib_AbiType_t<bool> bBold) {
    __zz_cib_obj->SetBold(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bBold)
    );
  }
  static void __zz_cib_decl __zz_cib_delete_7(::PoDoFo::PdfFont* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfFont>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class430 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::SetItalic_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::EmbedFont_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::EmbedSubsetFont_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::AddUsedSubsettingGlyphs_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::WriteStringToStream_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::AddUsedGlyphname_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::SetBold_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::__zz_cib_delete_7)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfFont>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class430::__zz_cib_GetMethodTable();
}
}

