#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IDataErrorInfo)
// Forward declare root types
namespace System::ComponentModel {
class IDataErrorInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::IDataErrorInfo);
// Type: System.ComponentModel::IDataErrorInfo
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::IDataErrorInfo*
class CORDL_TYPE IDataErrorInfo {
public:
  // Declarations
  __declspec(property(get = get_Error))::StringW Error;

  __declspec(property(get = get_Item))::StringW Item[];

  /// @brief Method get_Error, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Error();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Item(::StringW columnName);

  // Ctor Parameters [CppParam { name: "", ty: "IDataErrorInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDataErrorInfo(IDataErrorInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDataErrorInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDataErrorInfo(IDataErrorInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::IDataErrorInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IDataErrorInfo*, "System.ComponentModel", "IDataErrorInfo");
