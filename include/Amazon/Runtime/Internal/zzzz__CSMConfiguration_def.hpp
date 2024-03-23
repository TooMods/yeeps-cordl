#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CSMConfiguration)
// Forward declare root types
namespace Amazon::Runtime::Internal {
class CSMConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::CSMConfiguration);
// Type: Amazon.Runtime.Internal::CSMConfiguration
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::CSMConfiguration*
class CORDL_TYPE CSMConfiguration : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ClientId, put = set_ClientId))::StringW ClientId;

  __declspec(property(get = get_Enabled, put = set_Enabled)) bool Enabled;

  __declspec(property(get = get_Host, put = set_Host))::StringW Host;

  __declspec(property(get = get_Port, put = set_Port)) int32_t Port;

  /// @brief Field <ClientId>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ClientId_k__BackingField, put = __cordl_internal_set__ClientId_k__BackingField))::StringW _ClientId_k__BackingField;

  /// @brief Field <Enabled>k__BackingField, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get__Enabled_k__BackingField, put = __cordl_internal_set__Enabled_k__BackingField)) bool _Enabled_k__BackingField;

  /// @brief Field <Host>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Host_k__BackingField, put = __cordl_internal_set__Host_k__BackingField))::StringW _Host_k__BackingField;

  /// @brief Field <Port>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__Port_k__BackingField, put = __cordl_internal_set__Port_k__BackingField)) int32_t _Port_k__BackingField;

  static inline ::Amazon::Runtime::Internal::CSMConfiguration* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__ClientId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ClientId_k__BackingField();

  constexpr bool const& __cordl_internal_get__Enabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Enabled_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Host_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Host_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__Port_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Port_k__BackingField();

  constexpr void __cordl_internal_set__ClientId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Enabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Host_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Port_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x2034fd8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ClientId, addr 0x2034fc8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ClientId();

  /// @brief Method get_Enabled, addr 0x2034fb4, size 0x8, virtual false, abstract: false, final false
  inline bool get_Enabled();

  /// @brief Method get_Host, addr 0x2034f94, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Host();

  /// @brief Method get_Port, addr 0x2034fa4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Port();

  /// @brief Method set_ClientId, addr 0x2034fd0, size 0x8, virtual false, abstract: false, final false
  inline void set_ClientId(::StringW value);

  /// @brief Method set_Enabled, addr 0x2034fbc, size 0xc, virtual false, abstract: false, final false
  inline void set_Enabled(bool value);

  /// @brief Method set_Host, addr 0x2034f9c, size 0x8, virtual false, abstract: false, final false
  inline void set_Host(::StringW value);

  /// @brief Method set_Port, addr 0x2034fac, size 0x8, virtual false, abstract: false, final false
  inline void set_Port(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CSMConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CSMConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CSMConfiguration(CSMConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CSMConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CSMConfiguration(CSMConfiguration const&) = delete;

  /// @brief Field <Host>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Host_k__BackingField;

  /// @brief Field <Port>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____Port_k__BackingField;

  /// @brief Field <Enabled>k__BackingField, offset: 0x1c, size: 0x1, def value: None
  bool ____Enabled_k__BackingField;

  /// @brief Field <ClientId>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____ClientId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::CSMConfiguration, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::CSMConfiguration, ____Host_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::CSMConfiguration, ____Port_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::CSMConfiguration, ____Enabled_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::CSMConfiguration, ____ClientId_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::CSMConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::CSMConfiguration*, "Amazon.Runtime.Internal", "CSMConfiguration");
