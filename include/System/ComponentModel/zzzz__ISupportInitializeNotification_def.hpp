#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISupportInitializeNotification)
namespace System::ComponentModel {
class ISupportInitialize;
}
namespace System {
class EventHandler;
}
// Forward declare root types
namespace System::ComponentModel {
class ISupportInitializeNotification;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ISupportInitializeNotification);
// Type: System.ComponentModel::ISupportInitializeNotification
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ISupportInitializeNotification*
class CORDL_TYPE ISupportInitializeNotification {
public:
  // Declarations
  __declspec(property(get = get_IsInitialized)) bool IsInitialized;

  /// @brief Convert operator to "::System::ComponentModel::ISupportInitialize"
  constexpr operator ::System::ComponentModel::ISupportInitialize*() noexcept;

  /// @brief Method add_Initialized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_Initialized(::System::EventHandler* value);

  /// @brief Method get_IsInitialized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsInitialized();

  /// @brief Convert to "::System::ComponentModel::ISupportInitialize"
  constexpr ::System::ComponentModel::ISupportInitialize* i___System__ComponentModel__ISupportInitialize() noexcept;

  /// @brief Method remove_Initialized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_Initialized(::System::EventHandler* value);

  // Ctor Parameters [CppParam { name: "", ty: "ISupportInitializeNotification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISupportInitializeNotification(ISupportInitializeNotification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISupportInitializeNotification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISupportInitializeNotification(ISupportInitializeNotification const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ISupportInitializeNotification);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ISupportInitializeNotification*, "System.ComponentModel", "ISupportInitializeNotification");
