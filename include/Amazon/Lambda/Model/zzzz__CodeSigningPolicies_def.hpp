#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CodeSigningPolicies)
namespace Amazon::Lambda {
class CodeSigningPolicy;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class CodeSigningPolicies;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::CodeSigningPolicies);
// Type: Amazon.Lambda.Model::CodeSigningPolicies
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::CodeSigningPolicies*
class CORDL_TYPE CodeSigningPolicies : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_UntrustedArtifactOnDeployment, put = set_UntrustedArtifactOnDeployment))::Amazon::Lambda::CodeSigningPolicy* UntrustedArtifactOnDeployment;

  /// @brief Field _untrustedArtifactOnDeployment, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__untrustedArtifactOnDeployment,
                      put = __cordl_internal_set__untrustedArtifactOnDeployment))::Amazon::Lambda::CodeSigningPolicy* _untrustedArtifactOnDeployment;

  /// @brief Method IsSetUntrustedArtifactOnDeployment, addr 0x2bc47c4, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetUntrustedArtifactOnDeployment();

  static inline ::Amazon::Lambda::Model::CodeSigningPolicies* New_ctor();

  constexpr ::Amazon::Lambda::CodeSigningPolicy*& __cordl_internal_get__untrustedArtifactOnDeployment();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::CodeSigningPolicy*> const& __cordl_internal_get__untrustedArtifactOnDeployment() const;

  constexpr void __cordl_internal_set__untrustedArtifactOnDeployment(::Amazon::Lambda::CodeSigningPolicy* value);

  /// @brief Method .ctor, addr 0x2bc4824, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_UntrustedArtifactOnDeployment, addr 0x2bc47b4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::CodeSigningPolicy* get_UntrustedArtifactOnDeployment();

  /// @brief Method set_UntrustedArtifactOnDeployment, addr 0x2bc47bc, size 0x8, virtual false, abstract: false, final false
  inline void set_UntrustedArtifactOnDeployment(::Amazon::Lambda::CodeSigningPolicy* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CodeSigningPolicies();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CodeSigningPolicies", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CodeSigningPolicies(CodeSigningPolicies&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CodeSigningPolicies", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CodeSigningPolicies(CodeSigningPolicies const&) = delete;

  /// @brief Field _untrustedArtifactOnDeployment, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Lambda::CodeSigningPolicy* ____untrustedArtifactOnDeployment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::CodeSigningPolicies, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CodeSigningPolicies, ____untrustedArtifactOnDeployment) == 0x10, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::CodeSigningPolicies);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::CodeSigningPolicies*, "Amazon.Lambda.Model", "CodeSigningPolicies");
