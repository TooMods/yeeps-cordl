#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DeterminedCSMConfiguration)
namespace Amazon::Runtime::Internal {
class CSMConfiguration;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class DeterminedCSMConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::DeterminedCSMConfiguration);
// Type: Amazon.Runtime.Internal::DeterminedCSMConfiguration
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::DeterminedCSMConfiguration*
class CORDL_TYPE DeterminedCSMConfiguration : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CSMConfiguration, put = set_CSMConfiguration))::Amazon::Runtime::Internal::CSMConfiguration* CSMConfiguration;

  /// @brief Field <CSMConfiguration>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__CSMConfiguration_k__BackingField,
                      put = __cordl_internal_set__CSMConfiguration_k__BackingField))::Amazon::Runtime::Internal::CSMConfiguration* _CSMConfiguration_k__BackingField;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance))::Amazon::Runtime::Internal::DeterminedCSMConfiguration* instance;

  static inline ::Amazon::Runtime::Internal::DeterminedCSMConfiguration* New_ctor();

  constexpr ::Amazon::Runtime::Internal::CSMConfiguration*& __cordl_internal_get__CSMConfiguration_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::CSMConfiguration*> const& __cordl_internal_get__CSMConfiguration_k__BackingField() const;

  constexpr void __cordl_internal_set__CSMConfiguration_k__BackingField(::Amazon::Runtime::Internal::CSMConfiguration* value);

  /// @brief Method .ctor, addr 0x23d4f38, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::Internal::DeterminedCSMConfiguration* getStaticF_instance();

  /// @brief Method get_CSMConfiguration, addr 0x23d4f28, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::CSMConfiguration* get_CSMConfiguration();

  /// @brief Method get_Instance, addr 0x23d5010, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::DeterminedCSMConfiguration* get_Instance();

  static inline void setStaticF_instance(::Amazon::Runtime::Internal::DeterminedCSMConfiguration* value);

  /// @brief Method set_CSMConfiguration, addr 0x23d4f30, size 0x8, virtual false, abstract: false, final false
  inline void set_CSMConfiguration(::Amazon::Runtime::Internal::CSMConfiguration* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeterminedCSMConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeterminedCSMConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeterminedCSMConfiguration(DeterminedCSMConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeterminedCSMConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeterminedCSMConfiguration(DeterminedCSMConfiguration const&) = delete;

  /// @brief Field <CSMConfiguration>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::CSMConfiguration* ____CSMConfiguration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::DeterminedCSMConfiguration, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DeterminedCSMConfiguration, ____CSMConfiguration_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::DeterminedCSMConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::DeterminedCSMConfiguration*, "Amazon.Runtime.Internal", "DeterminedCSMConfiguration");
