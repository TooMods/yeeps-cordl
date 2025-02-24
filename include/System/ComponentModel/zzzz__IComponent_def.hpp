#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IComponent)
namespace System::ComponentModel {
class ISite;
}
namespace System {
class EventHandler;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::ComponentModel {
class IComponent;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::IComponent);
// Type: System.ComponentModel::IComponent
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::IComponent*
class CORDL_TYPE IComponent {
public:
  // Declarations
  __declspec(property(get = get_Site, put = set_Site))::System::ComponentModel::ISite* Site;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method add_Disposed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_Disposed(::System::EventHandler* value);

  /// @brief Method get_Site, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::ISite* get_Site();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_Disposed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_Disposed(::System::EventHandler* value);

  /// @brief Method set_Site, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Site(::System::ComponentModel::ISite* value);

  // Ctor Parameters [CppParam { name: "", ty: "IComponent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IComponent(IComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IComponent(IComponent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::IComponent);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IComponent*, "System.ComponentModel", "IComponent");
