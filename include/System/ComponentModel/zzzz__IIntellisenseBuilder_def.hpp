#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IIntellisenseBuilder)
// Forward declare root types
namespace System::ComponentModel {
class IIntellisenseBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::IIntellisenseBuilder);
// Type: System.ComponentModel::IIntellisenseBuilder
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::IIntellisenseBuilder*
class CORDL_TYPE IIntellisenseBuilder {
public:
  // Declarations
  __declspec(property(get = get_Name))::StringW Name;

  /// @brief Method Show, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Show(::StringW language, ::StringW value, ByRef<::StringW> newValue);

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Name();

  // Ctor Parameters [CppParam { name: "", ty: "IIntellisenseBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IIntellisenseBuilder(IIntellisenseBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IIntellisenseBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IIntellisenseBuilder(IIntellisenseBuilder const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::IIntellisenseBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IIntellisenseBuilder*, "System.ComponentModel", "IIntellisenseBuilder");
