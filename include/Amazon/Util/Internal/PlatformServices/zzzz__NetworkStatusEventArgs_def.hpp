#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Util/Internal/PlatformServices/zzzz__NetworkStatus_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(NetworkStatusEventArgs)
namespace Amazon::Util::Internal::PlatformServices {
struct NetworkStatus;
}
// Forward declare root types
namespace Amazon::Util::Internal::PlatformServices {
class NetworkStatusEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs);
// Type: Amazon.Util.Internal.PlatformServices::NetworkStatusEventArgs
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Util::Internal::PlatformServices {
// Is value type: false
// CS Name: ::Amazon.Util.Internal.PlatformServices::NetworkStatusEventArgs*
class CORDL_TYPE NetworkStatusEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_Status, put = set_Status))::Amazon::Util::Internal::PlatformServices::NetworkStatus Status;

  /// @brief Field <Status>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Status_k__BackingField,
                      put = __cordl_internal_set__Status_k__BackingField))::Amazon::Util::Internal::PlatformServices::NetworkStatus _Status_k__BackingField;

  static inline ::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs* New_ctor(::Amazon::Util::Internal::PlatformServices::NetworkStatus status);

  constexpr ::Amazon::Util::Internal::PlatformServices::NetworkStatus const& __cordl_internal_get__Status_k__BackingField() const;

  constexpr ::Amazon::Util::Internal::PlatformServices::NetworkStatus& __cordl_internal_get__Status_k__BackingField();

  constexpr void __cordl_internal_set__Status_k__BackingField(::Amazon::Util::Internal::PlatformServices::NetworkStatus value);

  /// @brief Method .ctor, addr 0x1fda2b8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Util::Internal::PlatformServices::NetworkStatus status);

  /// @brief Method get_Status, addr 0x1fda2a8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Util::Internal::PlatformServices::NetworkStatus get_Status();

  /// @brief Method set_Status, addr 0x1fda2b0, size 0x8, virtual false, abstract: false, final false
  inline void set_Status(::Amazon::Util::Internal::PlatformServices::NetworkStatus value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkStatusEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkStatusEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkStatusEventArgs(NetworkStatusEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkStatusEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkStatusEventArgs(NetworkStatusEventArgs const&) = delete;

  /// @brief Field <Status>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::Amazon::Util::Internal::PlatformServices::NetworkStatus ____Status_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs, ____Status_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::Util::Internal::PlatformServices
NEED_NO_BOX(::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*, "Amazon.Util.Internal.PlatformServices", "NetworkStatusEventArgs");
