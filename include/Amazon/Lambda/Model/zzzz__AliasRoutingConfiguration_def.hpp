#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AliasRoutingConfiguration)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class AliasRoutingConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::AliasRoutingConfiguration);
// Type: Amazon.Lambda.Model::AliasRoutingConfiguration
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::AliasRoutingConfiguration*
class CORDL_TYPE AliasRoutingConfiguration : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AdditionalVersionWeights, put = set_AdditionalVersionWeights))::System::Collections::Generic::Dictionary_2<::StringW, double_t>* AdditionalVersionWeights;

  /// @brief Field _additionalVersionWeights, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalVersionWeights,
                      put = __cordl_internal_set__additionalVersionWeights))::System::Collections::Generic::Dictionary_2<::StringW, double_t>* _additionalVersionWeights;

  /// @brief Method IsSetAdditionalVersionWeights, addr 0x2bc44f4, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetAdditionalVersionWeights();

  static inline ::Amazon::Lambda::Model::AliasRoutingConfiguration* New_ctor();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, double_t>*& __cordl_internal_get__additionalVersionWeights();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, double_t>*> const& __cordl_internal_get__additionalVersionWeights() const;

  constexpr void __cordl_internal_set__additionalVersionWeights(::System::Collections::Generic::Dictionary_2<::StringW, double_t>* value);

  /// @brief Method .ctor, addr 0x2bc454c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AdditionalVersionWeights, addr 0x2bc44e4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, double_t>* get_AdditionalVersionWeights();

  /// @brief Method set_AdditionalVersionWeights, addr 0x2bc44ec, size 0x8, virtual false, abstract: false, final false
  inline void set_AdditionalVersionWeights(::System::Collections::Generic::Dictionary_2<::StringW, double_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AliasRoutingConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AliasRoutingConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AliasRoutingConfiguration(AliasRoutingConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AliasRoutingConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AliasRoutingConfiguration(AliasRoutingConfiguration const&) = delete;

  /// @brief Field _additionalVersionWeights, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, double_t>* ____additionalVersionWeights;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::AliasRoutingConfiguration, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AliasRoutingConfiguration, ____additionalVersionWeights) == 0x10, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::AliasRoutingConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::AliasRoutingConfiguration*, "Amazon.Lambda.Model", "AliasRoutingConfiguration");
