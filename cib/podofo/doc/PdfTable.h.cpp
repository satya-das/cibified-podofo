#include "podofo/base/PdfCanvas.h"
#include "podofo/base/PdfColor.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfString.h"
#include "podofo/doc/PdfFont.h"
#include "podofo/doc/PdfImage.h"
#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfPainter.h"
#include "podofo/doc/PdfTable.h"

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
class __zz_cib_Generic<::PoDoFo::PdfTableModel> : public ::PoDoFo::PdfTableModel {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfTableModel>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl)
    : ::PoDoFo::PdfTableModel::PdfTableModel()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  bool HasImage(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::HasImage_0>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::PdfColor GetBorderColor(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfColor>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfColor>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetBorderColor_1>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  double GetBorderWidth() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetBorderWidth_2>(
        __zz_cib_h_
      )
    );
  }
  bool HasBorders() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::HasBorders_3>(
        __zz_cib_h_
      )
    );
  }
  ::PoDoFo::PdfColor GetForegroundColor(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfColor>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfColor>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetForegroundColor_4>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  bool HasWordWrap(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::HasWordWrap_5>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::PdfString GetText(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfString>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfString>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetText_6>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::EPdfVerticalAlignment GetVerticalAlignment(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::EPdfVerticalAlignment>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::EPdfVerticalAlignment>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetVerticalAlignment_7>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::PdfFont* GetFont(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfFont*>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetFont_8>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::PdfImage* GetImage(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfImage*>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfImage*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetImage_9>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  bool HasBackgroundColor(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::HasBackgroundColor_10>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::EPdfAlignment GetAlignment(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::EPdfAlignment>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::EPdfAlignment>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetAlignment_11>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::PdfColor GetBackgroundColor(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfColor>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfColor>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetBackgroundColor_12>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
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
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfTableModel)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class474::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfTableModel> : public ::PoDoFo::PdfTableModel {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfTableModel>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfTableModel::PdfTableModel;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfTableModel>(__zz_cib_proxy, __zz_cib_mtbl);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl GetText_2(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->GetText(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfAlignment> __zz_cib_decl GetAlignment_3(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfAlignment>(
      __zz_cib_obj->GetAlignment(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfVerticalAlignment> __zz_cib_decl GetVerticalAlignment_4(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfVerticalAlignment>(
      __zz_cib_obj->GetVerticalAlignment(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl GetFont_5(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_obj->GetFont(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasBackgroundColor_6(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->HasBackgroundColor(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfColor> __zz_cib_decl GetBackgroundColor_7(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfColor>(
      __zz_cib_obj->GetBackgroundColor(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfColor> __zz_cib_decl GetForegroundColor_8(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfColor>(
      __zz_cib_obj->GetForegroundColor(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasWordWrap_9(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->HasWordWrap(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasBorders_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->HasBorders()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetBorderWidth_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetBorderWidth()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfColor> __zz_cib_decl GetBorderColor_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfColor>(
      __zz_cib_obj->GetBorderColor(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasImage_13(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->HasImage(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfImage*> __zz_cib_decl GetImage_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfImage*>(
      __zz_cib_obj->GetImage(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static std::uint32_t __zz_cib_decl __zz_cib_get_class_id(::PoDoFo::PdfTableModel** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfSimpleTableModel))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class475::__zz_cib_classid;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfTableModel))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class474::__zz_cib_classid;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfSimpleTableModel*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class475::__zz_cib_classid;
      }
    }
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class474::__zz_cib_classid;
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class474 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::GetText_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::GetAlignment_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::GetVerticalAlignment_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::GetFont_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::HasBackgroundColor_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::GetBackgroundColor_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::GetForegroundColor_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::HasWordWrap_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::HasBorders_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::GetBorderWidth_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::GetBorderColor_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::HasImage_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::GetImage_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::__zz_cib_get_class_id),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTableModel>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 17 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
class __zz_cib_Generic<::PoDoFo::PdfSimpleTableModel> : public ::PoDoFo::PdfSimpleTableModel {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfSimpleTableModel>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl)
    : ::PoDoFo::PdfSimpleTableModel::PdfSimpleTableModel()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, int nCols, int nRows)
    : ::PoDoFo::PdfSimpleTableModel::PdfSimpleTableModel(    std::move(nCols),
    std::move(nRows))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfSimpleTableModel& __zz_cib_param0)
    : ::PoDoFo::PdfSimpleTableModel::PdfSimpleTableModel(    __zz_cib_param0)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  bool HasImage(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::HasImage_0>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::PdfColor GetBorderColor(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfColor>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfColor>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetBorderColor_1>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  double GetBorderWidth() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetBorderWidth_2>(
        __zz_cib_h_
      )
    );
  }
  bool HasBorders() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::HasBorders_3>(
        __zz_cib_h_
      )
    );
  }
  ::PoDoFo::PdfColor GetForegroundColor(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfColor>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfColor>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetForegroundColor_4>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  bool HasWordWrap(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::HasWordWrap_5>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::PdfString GetText(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfString>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfString>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetText_6>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::EPdfVerticalAlignment GetVerticalAlignment(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::EPdfVerticalAlignment>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::EPdfVerticalAlignment>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetVerticalAlignment_7>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::PdfFont* GetFont(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfFont*>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetFont_8>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::PdfImage* GetImage(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfImage*>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfImage*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetImage_9>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  bool HasBackgroundColor(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::HasBackgroundColor_10>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::EPdfAlignment GetAlignment(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::EPdfAlignment>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::EPdfAlignment>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetAlignment_11>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
      )
    );
  }
  ::PoDoFo::PdfColor GetBackgroundColor(int col, int row) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::PdfColor>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(col)>, __zz_cib_AbiType_t<decltype(row)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfColor>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetBackgroundColor_12>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(col)>(std::move(col)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(row)>(std::move(row))
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
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfSimpleTableModel)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class475::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel> : public ::PoDoFo::PdfSimpleTableModel {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfSimpleTableModel>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfSimpleTableModel::PdfSimpleTableModel;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfSimpleTableModel>(__zz_cib_proxy, __zz_cib_mtbl, *__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfSimpleTableModel>(__zz_cib_proxy, __zz_cib_mtbl);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<int> nCols, __zz_cib_AbiType_t<int> nRows) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfSimpleTableModel>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<int>(nCols),
    __zz_cib_::__zz_cib_FromAbiType<int>(nRows));
  }
  static void __zz_cib_decl __zz_cib_delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFont_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfFont*> pFont) {
    __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::SetFont(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(pFont)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetAlignment_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfAlignment> eAlignment) {
    __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::SetAlignment(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfAlignment>(eAlignment)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetAlignment_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfVerticalAlignment> eAlignment) {
    __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::SetAlignment(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfVerticalAlignment>(eAlignment)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBackgroundColor_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rColor) {
    __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::SetBackgroundColor(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rColor)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetForegroundColor_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rColor) {
    __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::SetForegroundColor(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rColor)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBackgroundEnabled_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bEnable) {
    __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::SetBackgroundEnabled(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bEnable)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetWordWrapEnabled_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bEnable) {
    __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::SetWordWrapEnabled(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bEnable)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBorderEnabled_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bEnable) {
    __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::SetBorderEnabled(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bEnable)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBorderWidth_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dWidth) {
    __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::SetBorderWidth(
      __zz_cib_::__zz_cib_FromAbiType<double>(dWidth)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetText_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsString) {
    __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::SetText(
      __zz_cib_::__zz_cib_FromAbiType<int>(col),
      __zz_cib_::__zz_cib_FromAbiType<int>(row),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsString)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl GetText_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::GetText(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfAlignment> __zz_cib_decl GetAlignment_15(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfAlignment>(
      __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::GetAlignment(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfVerticalAlignment> __zz_cib_decl GetVerticalAlignment_16(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfVerticalAlignment>(
      __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::GetVerticalAlignment(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl GetFont_17(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::GetFont(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasBackgroundColor_18(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::HasBackgroundColor(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfColor> __zz_cib_decl GetBackgroundColor_19(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfColor>(
      __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::GetBackgroundColor(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfColor> __zz_cib_decl GetForegroundColor_20(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfColor>(
      __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::GetForegroundColor(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasWordWrap_21(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::HasWordWrap(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasBorders_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::HasBorders()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetBorderWidth_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::GetBorderWidth()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfColor> __zz_cib_decl GetBorderColor_24(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfColor>(
      __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::GetBorderColor(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasImage_25(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::HasImage(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfImage*> __zz_cib_decl GetImage_26(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> col, __zz_cib_AbiType_t<int> row) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfImage*>(
      __zz_cib_obj->::PoDoFo::PdfSimpleTableModel::GetImage(
        __zz_cib_::__zz_cib_FromAbiType<int>(col),
        __zz_cib_::__zz_cib_FromAbiType<int>(row)
      )
    );
  }
  static ::PoDoFo::PdfTableModel* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class474(::PoDoFo::PdfSimpleTableModel* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfSimpleTableModel* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class474(::PoDoFo::PdfTableModel* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfSimpleTableModel*>(__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class475 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::__zz_cib_delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::SetFont_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::SetAlignment_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::SetAlignment_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::SetBackgroundColor_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::SetForegroundColor_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::SetBackgroundEnabled_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::SetWordWrapEnabled_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::SetBorderEnabled_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::SetBorderWidth_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::SetText_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::GetText_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::GetAlignment_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::GetVerticalAlignment_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::GetFont_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::HasBackgroundColor_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::GetBackgroundColor_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::GetForegroundColor_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::HasWordWrap_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::HasBorders_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::GetBorderWidth_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::GetBorderColor_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::HasImage_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::GetImage_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::__zz_cib_cast_to___zz_cib_Class474),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::__zz_cib_cast_from___zz_cib_Class474),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleTableModel>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 30 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<> struct __zz_cib_Delegator<::PoDoFo::PdfTable>;
template <>
class __zz_cib_Generic<::PoDoFo::PdfTable> : public ::PoDoFo::PdfTable {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfTable>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, int nCols, int nRows)
    : ::PoDoFo::PdfTable::PdfTable(    std::move(nCols),
    std::move(nRows))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfTable& __zz_cib_param0)
    : ::PoDoFo::PdfTable::PdfTable(    __zz_cib_param0)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  void Draw(double dX, double dY, ::PoDoFo::PdfPainter* pPainter, const ::PoDoFo::PdfRect& rClipRect, double* pdLastX, double* pdLastY) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(dX)>, __zz_cib_AbiType_t<decltype(dY)>, __zz_cib_AbiType_t<decltype(pPainter)>, __zz_cib_AbiType_t<decltype(rClipRect)>, __zz_cib_AbiType_t<decltype(pdLastX)>, __zz_cib_AbiType_t<decltype(pdLastY)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Draw_0>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pPainter)>(std::move(pPainter)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rClipRect)>(rClipRect),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pdLastX)>(std::move(pdLastX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pdLastY)>(std::move(pdLastY))
    );
  }
  double GetHeight(double dX, double dY, ::PoDoFo::PdfCanvas* pPage) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(dX)>, __zz_cib_AbiType_t<decltype(dY)>, __zz_cib_AbiType_t<decltype(pPage)>);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetHeight_1>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage))
      )
    );
  }
  double GetWidth(double dX, double dY, ::PoDoFo::PdfCanvas* pPage) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(dX)>, __zz_cib_AbiType_t<decltype(dY)>, __zz_cib_AbiType_t<decltype(pPage)>);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetWidth_2>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage))
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_3>(
      __zz_cib_h_
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfTable)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  friend struct __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class476::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfTable> : public ::PoDoFo::PdfTable {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfTable>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfTable::PdfTable;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfTable>(__zz_cib_proxy, __zz_cib_mtbl, *__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<int> nCols, __zz_cib_AbiType_t<int> nRows) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfTable>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<int>(nCols),
    __zz_cib_::__zz_cib_FromAbiType<int>(nRows));
  }
  static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Draw_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY, __zz_cib_AbiType_t<::PoDoFo::PdfPainter*> pPainter, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rClipRect, __zz_cib_AbiType_t<double*> pdLastX, __zz_cib_AbiType_t<double*> pdLastY) {
    __zz_cib_obj->::PoDoFo::PdfTable::Draw(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPainter*>(pPainter),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rClipRect),
      __zz_cib_::__zz_cib_FromAbiType<double*>(pdLastX),
      __zz_cib_::__zz_cib_FromAbiType<double*>(pdLastY)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetWidth_4(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY, __zz_cib_AbiType_t<::PoDoFo::PdfCanvas*> pPage) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfTable::GetWidth(
        __zz_cib_::__zz_cib_FromAbiType<double>(dX),
        __zz_cib_::__zz_cib_FromAbiType<double>(dY),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfCanvas*>(pPage)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetHeight_5(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY, __zz_cib_AbiType_t<::PoDoFo::PdfCanvas*> pPage) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfTable::GetHeight(
        __zz_cib_::__zz_cib_FromAbiType<double>(dX),
        __zz_cib_::__zz_cib_FromAbiType<double>(dY),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfCanvas*>(pPage)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetModel_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfTableModel*> pModel) {
    __zz_cib_obj->::PoDoFo::PdfTable::SetModel(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfTableModel*>(pModel)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfTableModel*> __zz_cib_decl GetModel_7(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfTableModel*>(
      __zz_cib_obj->::PoDoFo::PdfTable::GetModel()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetColumnWidths_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double*> pdWidths) {
    __zz_cib_obj->::PoDoFo::PdfTable::SetColumnWidths(
      __zz_cib_::__zz_cib_FromAbiType<double*>(pdWidths)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetRowHeights_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double*> pdHeights) {
    __zz_cib_obj->::PoDoFo::PdfTable::SetRowHeights(
      __zz_cib_::__zz_cib_FromAbiType<double*>(pdHeights)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetColumnWidth_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dWidth) {
    __zz_cib_obj->::PoDoFo::PdfTable::SetColumnWidth(
      __zz_cib_::__zz_cib_FromAbiType<double>(dWidth)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetRowHeight_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dHeight) {
    __zz_cib_obj->::PoDoFo::PdfTable::SetRowHeight(
      __zz_cib_::__zz_cib_FromAbiType<double>(dHeight)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetTableWidth_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dWidth) {
    __zz_cib_obj->::PoDoFo::PdfTable::SetTableWidth(
      __zz_cib_::__zz_cib_FromAbiType<double>(dWidth)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetTableHeight_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dHeight) {
    __zz_cib_obj->::PoDoFo::PdfTable::SetTableHeight(
      __zz_cib_::__zz_cib_FromAbiType<double>(dHeight)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetAutoPageBreak_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bPageBreak, __zz_cib_AbiType_t<::PoDoFo::PdfTable::CreatePageCallback> callback, __zz_cib_AbiType_t<void*> pCustomData) {
    __zz_cib_obj->::PoDoFo::PdfTable::SetAutoPageBreak(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bPageBreak),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfTable::CreatePageCallback>(callback),
      __zz_cib_::__zz_cib_FromAbiType<void*>(pCustomData)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetAutoPageBreak_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfTable::GetAutoPageBreak()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetCols_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfTable::GetCols()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetRows_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfTable::GetRows()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl CalculateTableSize_18(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const double> dX, __zz_cib_AbiType_t<const double> dY, __zz_cib_AbiType_t<const ::PoDoFo::PdfCanvas*> pCanvas, __zz_cib_AbiType_t<double*> pdWidths, __zz_cib_AbiType_t<double*> pdHeights, __zz_cib_AbiType_t<double*> pdWidth, __zz_cib_AbiType_t<double*> pdHeight) {
    __zz_cib_obj->::PoDoFo::PdfTable::CalculateTableSize(
      __zz_cib_::__zz_cib_FromAbiType<const double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<const double>(dY),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfCanvas*>(pCanvas),
      __zz_cib_::__zz_cib_FromAbiType<double*>(pdWidths),
      __zz_cib_::__zz_cib_FromAbiType<double*>(pdHeights),
      __zz_cib_::__zz_cib_FromAbiType<double*>(pdWidth),
      __zz_cib_::__zz_cib_FromAbiType<double*>(pdHeight)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DrawHorizontalBorders_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nRow, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY, __zz_cib_AbiType_t<::PoDoFo::PdfPainter*> pPainter, __zz_cib_AbiType_t<double*> pdColWidths) {
    __zz_cib_obj->::PoDoFo::PdfTable::DrawHorizontalBorders(
      __zz_cib_::__zz_cib_FromAbiType<int>(nRow),
      __zz_cib_::__zz_cib_FromAbiType<double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPainter*>(pPainter),
      __zz_cib_::__zz_cib_FromAbiType<double*>(pdColWidths)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl CheckForNewPage_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double*> pdY, __zz_cib_AbiType_t<double*> pdCurY, __zz_cib_AbiType_t<double> dRowHeight, __zz_cib_AbiType_t<::PoDoFo::PdfPainter*> pPainter) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfTable::CheckForNewPage(
        __zz_cib_::__zz_cib_FromAbiType<double*>(pdY),
        __zz_cib_::__zz_cib_FromAbiType<double*>(pdCurY),
        __zz_cib_::__zz_cib_FromAbiType<double>(dRowHeight),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPainter*>(pPainter)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class476 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::__zz_cib_delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::Draw_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::GetWidth_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::GetHeight_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::SetModel_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::GetModel_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::SetColumnWidths_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::SetRowHeights_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::SetColumnWidth_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::SetRowHeight_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::SetTableWidth_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::SetTableHeight_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::SetAutoPageBreak_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::GetAutoPageBreak_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::GetCols_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::GetRows_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::CalculateTableSize_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::DrawHorizontalBorders_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::CheckForNewPage_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTable>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
