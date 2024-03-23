#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__RequestRetryMode_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalConfiguration)
namespace Amazon::Runtime {
struct RequestRetryMode;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class InternalConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::InternalConfiguration);
// Type: Amazon.Runtime.Internal::InternalConfiguration
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::InternalConfiguration*
class CORDL_TYPE InternalConfiguration : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_EndpointDiscoveryEnabled, put = set_EndpointDiscoveryEnabled))::System::Nullable_1<bool> EndpointDiscoveryEnabled;

  __declspec(property(get = get_MaxAttempts, put = set_MaxAttempts))::System::Nullable_1<int32_t> MaxAttempts;

  __declspec(property(get = get_RetryMode, put = set_RetryMode))::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> RetryMode;

  /// @brief Field <EndpointDiscoveryEnabled>k__BackingField, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get__EndpointDiscoveryEnabled_k__BackingField,
                      put = __cordl_internal_set__EndpointDiscoveryEnabled_k__BackingField))::System::Nullable_1<bool> _EndpointDiscoveryEnabled_k__BackingField;

  /// @brief Field <MaxAttempts>k__BackingField, offset 0x1c, size 0x8
  __declspec(property(get = __cordl_internal_get__MaxAttempts_k__BackingField, put = __cordl_internal_set__MaxAttempts_k__BackingField))::System::Nullable_1<int32_t> _MaxAttempts_k__BackingField;

  /// @brief Field <RetryMode>k__BackingField, offset 0x14, size 0x8
  __declspec(property(get = __cordl_internal_get__RetryMode_k__BackingField,
                      put = __cordl_internal_set__RetryMode_k__BackingField))::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> _RetryMode_k__BackingField;

  static inline ::Amazon::Runtime::Internal::InternalConfiguration* New_ctor();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__EndpointDiscoveryEnabled_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__EndpointDiscoveryEnabled_k__BackingField();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__MaxAttempts_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__MaxAttempts_k__BackingField();

  constexpr ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> const& __cordl_internal_get__RetryMode_k__BackingField() const;

  constexpr ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode>& __cordl_internal_get__RetryMode_k__BackingField();

  constexpr void __cordl_internal_set__EndpointDiscoveryEnabled_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__MaxAttempts_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__RetryMode_k__BackingField(::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> value);

  /// @brief Method .ctor, addr 0x23d7cf0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_EndpointDiscoveryEnabled, addr 0x23d7cc0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_EndpointDiscoveryEnabled();

  /// @brief Method get_MaxAttempts, addr 0x23d7ce0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_MaxAttempts();

  /// @brief Method get_RetryMode, addr 0x23d7cd0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> get_RetryMode();

  /// @brief Method set_EndpointDiscoveryEnabled, addr 0x23d7cc8, size 0x8, virtual false, abstract: false, final false
  inline void set_EndpointDiscoveryEnabled(::System::Nullable_1<bool> value);

  /// @brief Method set_MaxAttempts, addr 0x23d7ce8, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxAttempts(::System::Nullable_1<int32_t> value);

  /// @brief Method set_RetryMode, addr 0x23d7cd8, size 0x8, virtual false, abstract: false, final false
  inline void set_RetryMode(::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalConfiguration(InternalConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalConfiguration(InternalConfiguration const&) = delete;

  /// @brief Field <EndpointDiscoveryEnabled>k__BackingField, offset: 0x10, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____EndpointDiscoveryEnabled_k__BackingField;

  /// @brief Field <RetryMode>k__BackingField, offset: 0x14, size: 0x8, def value: None
  ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> ____RetryMode_k__BackingField;

  /// @brief Field <MaxAttempts>k__BackingField, offset: 0x1c, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____MaxAttempts_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::InternalConfiguration, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::InternalConfiguration, ____EndpointDiscoveryEnabled_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::InternalConfiguration, ____RetryMode_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::InternalConfiguration, ____MaxAttempts_k__BackingField) == 0x1c, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::InternalConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::InternalConfiguration*, "Amazon.Runtime.Internal", "InternalConfiguration");
