#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INestedContainer)
namespace System::ComponentModel {
class IComponent;
}
namespace System::ComponentModel {
class IContainer;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::ComponentModel {
class INestedContainer;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::INestedContainer);
// Type: System.ComponentModel::INestedContainer
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::INestedContainer*
class CORDL_TYPE INestedContainer {
public:
  // Declarations
  __declspec(property(get = get_Owner))::System::ComponentModel::IComponent* Owner;

  /// @brief Convert operator to "::System::ComponentModel::IContainer"
  constexpr operator ::System::ComponentModel::IContainer*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method get_Owner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::IComponent* get_Owner();

  /// @brief Convert to "::System::ComponentModel::IContainer"
  constexpr ::System::ComponentModel::IContainer* i___System__ComponentModel__IContainer() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "INestedContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INestedContainer(INestedContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INestedContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INestedContainer(INestedContainer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::INestedContainer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::INestedContainer*, "System.ComponentModel", "INestedContainer");
