#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentVariableCSMConfigs)
namespace Amazon::Runtime::Internal {
class CSMFallbackConfigChain;
}
namespace Amazon::Util::Internal {
class IEnvironmentVariableRetriever;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class EnvironmentVariableCSMConfigs;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs);
// Type: Amazon.Runtime.Internal::EnvironmentVariableCSMConfigs
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::EnvironmentVariableCSMConfigs*
class CORDL_TYPE EnvironmentVariableCSMConfigs : public ::System::Object {
public:
  // Declarations
  /// @brief Field <environmentRetriever>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentRetriever_k__BackingField,
                      put = __cordl_internal_set__environmentRetriever_k__BackingField))::Amazon::Util::Internal::IEnvironmentVariableRetriever* _environmentRetriever_k__BackingField;

  __declspec(property(get = get_environmentRetriever, put = set_environmentRetriever))::Amazon::Util::Internal::IEnvironmentVariableRetriever* environmentRetriever;

  static inline ::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs* New_ctor(::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain);

  static inline ::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs* New_ctor(::Amazon::Util::Internal::IEnvironmentVariableRetriever* environmentRetriever,
                                                                                     ::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain);

  /// @brief Method SetupConfiguration, addr 0x23d3340, size 0x610, virtual false, abstract: false, final false
  inline void SetupConfiguration(::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain);

  constexpr ::Amazon::Util::Internal::IEnvironmentVariableRetriever*& __cordl_internal_get__environmentRetriever_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Internal::IEnvironmentVariableRetriever*> const& __cordl_internal_get__environmentRetriever_k__BackingField() const;

  constexpr void __cordl_internal_set__environmentRetriever_k__BackingField(::Amazon::Util::Internal::IEnvironmentVariableRetriever* value);

  /// @brief Method .ctor, addr 0x23d3950, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain);

  /// @brief Method .ctor, addr 0x23d327c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Util::Internal::IEnvironmentVariableRetriever* environmentRetriever, ::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain);

  /// @brief Method get_environmentRetriever, addr 0x23d326c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Util::Internal::IEnvironmentVariableRetriever* get_environmentRetriever();

  /// @brief Method set_environmentRetriever, addr 0x23d3274, size 0x8, virtual false, abstract: false, final false
  inline void set_environmentRetriever(::Amazon::Util::Internal::IEnvironmentVariableRetriever* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentVariableCSMConfigs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentVariableCSMConfigs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentVariableCSMConfigs(EnvironmentVariableCSMConfigs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentVariableCSMConfigs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentVariableCSMConfigs(EnvironmentVariableCSMConfigs const&) = delete;

  /// @brief Field <environmentRetriever>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Util::Internal::IEnvironmentVariableRetriever* ____environmentRetriever_k__BackingField;

  /// @brief Field CSM_CLIENTID offset 0xffffffff size 0x8
  static constexpr ::ConstString CSM_CLIENTID{ u"AWS_CSM_CLIENT_ID" };

  /// @brief Field CSM_ENABLED offset 0xffffffff size 0x8
  static constexpr ::ConstString CSM_ENABLED{ u"AWS_CSM_ENABLED" };

  /// @brief Field CSM_HOST offset 0xffffffff size 0x8
  static constexpr ::ConstString CSM_HOST{ u"AWS_CSM_HOST" };

  /// @brief Field CSM_PORT offset 0xffffffff size 0x8
  static constexpr ::ConstString CSM_PORT{ u"AWS_CSM_PORT" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs, ____environmentRetriever_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs*, "Amazon.Runtime.Internal", "EnvironmentVariableCSMConfigs");
