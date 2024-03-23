#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Vivox/zzzz__PresenceStatus_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Presence)
namespace System {
class Object;
}
namespace Unity::Services::Vivox {
struct PresenceStatus;
}
// Forward declare root types
namespace Unity::Services::Vivox {
struct Presence;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::Presence);
// Type: Unity.Services.Vivox::Presence
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::Presence
struct CORDL_TYPE Presence {
public:
  // Declarations
  /// @brief Method Equals, addr 0x2fc7b44, size 0x114, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2fc7c58, size 0x24, virtual false, abstract: false, final false
  inline bool Equals(::Unity::Services::Vivox::Presence other);

  /// @brief Method GetHashCode, addr 0x2fc7c7c, size 0x30, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x2fc7b38, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::PresenceStatus status, ::StringW message);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Presence();

  // Ctor Parameters [CppParam { name: "Status", ty: "::Unity::Services::Vivox::PresenceStatus", modifiers: "", def_value: None }, CppParam { name: "Message", ty: "::StringW", modifiers: "",
  // def_value: None }]
  constexpr Presence(::Unity::Services::Vivox::PresenceStatus Status, ::StringW Message) noexcept;

  /// @brief Field Status, offset: 0x0, size: 0x4, def value: None
  ::Unity::Services::Vivox::PresenceStatus Status;

  /// @brief Field Message, offset: 0x8, size: 0x8, def value: None
  ::StringW Message;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Presence, 0x10>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Presence, Status) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Presence, Message) == 0x8, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Presence, "Unity.Services.Vivox", "Presence");
