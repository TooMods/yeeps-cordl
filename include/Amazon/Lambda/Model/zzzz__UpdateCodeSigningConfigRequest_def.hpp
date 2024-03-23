#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UpdateCodeSigningConfigRequest)
namespace Amazon::Lambda::Model {
class AllowedPublishers;
}
namespace Amazon::Lambda::Model {
class CodeSigningPolicies;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class UpdateCodeSigningConfigRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::UpdateCodeSigningConfigRequest);
// Type: Amazon.Lambda.Model::UpdateCodeSigningConfigRequest
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::UpdateCodeSigningConfigRequest*
class CORDL_TYPE UpdateCodeSigningConfigRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_AllowedPublishers, put = set_AllowedPublishers))::Amazon::Lambda::Model::AllowedPublishers* AllowedPublishers;

  __declspec(property(get = get_CodeSigningConfigArn, put = set_CodeSigningConfigArn))::StringW CodeSigningConfigArn;

  __declspec(property(get = get_CodeSigningPolicies, put = set_CodeSigningPolicies))::Amazon::Lambda::Model::CodeSigningPolicies* CodeSigningPolicies;

  __declspec(property(get = get_Description, put = set_Description))::StringW Description;

  /// @brief Field _allowedPublishers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__allowedPublishers, put = __cordl_internal_set__allowedPublishers))::Amazon::Lambda::Model::AllowedPublishers* _allowedPublishers;

  /// @brief Field _codeSigningConfigArn, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__codeSigningConfigArn, put = __cordl_internal_set__codeSigningConfigArn))::StringW _codeSigningConfigArn;

  /// @brief Field _codeSigningPolicies, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__codeSigningPolicies, put = __cordl_internal_set__codeSigningPolicies))::Amazon::Lambda::Model::CodeSigningPolicies* _codeSigningPolicies;

  /// @brief Field _description, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__description, put = __cordl_internal_set__description))::StringW _description;

  /// @brief Method IsSetAllowedPublishers, addr 0x3109858, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetAllowedPublishers();

  /// @brief Method IsSetCodeSigningConfigArn, addr 0x3109878, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCodeSigningConfigArn();

  /// @brief Method IsSetCodeSigningPolicies, addr 0x3109898, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCodeSigningPolicies();

  /// @brief Method IsSetDescription, addr 0x31098b8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDescription();

  static inline ::Amazon::Lambda::Model::UpdateCodeSigningConfigRequest* New_ctor();

  constexpr ::Amazon::Lambda::Model::AllowedPublishers*& __cordl_internal_get__allowedPublishers();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::AllowedPublishers*> const& __cordl_internal_get__allowedPublishers() const;

  constexpr ::StringW const& __cordl_internal_get__codeSigningConfigArn() const;

  constexpr ::StringW& __cordl_internal_get__codeSigningConfigArn();

  constexpr ::Amazon::Lambda::Model::CodeSigningPolicies*& __cordl_internal_get__codeSigningPolicies();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::CodeSigningPolicies*> const& __cordl_internal_get__codeSigningPolicies() const;

  constexpr ::StringW const& __cordl_internal_get__description() const;

  constexpr ::StringW& __cordl_internal_get__description();

  constexpr void __cordl_internal_set__allowedPublishers(::Amazon::Lambda::Model::AllowedPublishers* value);

  constexpr void __cordl_internal_set__codeSigningConfigArn(::StringW value);

  constexpr void __cordl_internal_set__codeSigningPolicies(::Amazon::Lambda::Model::CodeSigningPolicies* value);

  constexpr void __cordl_internal_set__description(::StringW value);

  /// @brief Method .ctor, addr 0x31098c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AllowedPublishers, addr 0x3109848, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::AllowedPublishers* get_AllowedPublishers();

  /// @brief Method get_CodeSigningConfigArn, addr 0x3109868, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CodeSigningConfigArn();

  /// @brief Method get_CodeSigningPolicies, addr 0x3109888, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::CodeSigningPolicies* get_CodeSigningPolicies();

  /// @brief Method get_Description, addr 0x31098a8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Description();

  /// @brief Method set_AllowedPublishers, addr 0x3109850, size 0x8, virtual false, abstract: false, final false
  inline void set_AllowedPublishers(::Amazon::Lambda::Model::AllowedPublishers* value);

  /// @brief Method set_CodeSigningConfigArn, addr 0x3109870, size 0x8, virtual false, abstract: false, final false
  inline void set_CodeSigningConfigArn(::StringW value);

  /// @brief Method set_CodeSigningPolicies, addr 0x3109890, size 0x8, virtual false, abstract: false, final false
  inline void set_CodeSigningPolicies(::Amazon::Lambda::Model::CodeSigningPolicies* value);

  /// @brief Method set_Description, addr 0x31098b0, size 0x8, virtual false, abstract: false, final false
  inline void set_Description(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateCodeSigningConfigRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateCodeSigningConfigRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateCodeSigningConfigRequest(UpdateCodeSigningConfigRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateCodeSigningConfigRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateCodeSigningConfigRequest(UpdateCodeSigningConfigRequest const&) = delete;

  /// @brief Field _allowedPublishers, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Lambda::Model::AllowedPublishers* ____allowedPublishers;

  /// @brief Field _codeSigningConfigArn, offset: 0x40, size: 0x8, def value: None
  ::StringW ____codeSigningConfigArn;

  /// @brief Field _codeSigningPolicies, offset: 0x48, size: 0x8, def value: None
  ::Amazon::Lambda::Model::CodeSigningPolicies* ____codeSigningPolicies;

  /// @brief Field _description, offset: 0x50, size: 0x8, def value: None
  ::StringW ____description;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::UpdateCodeSigningConfigRequest, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateCodeSigningConfigRequest, ____allowedPublishers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateCodeSigningConfigRequest, ____codeSigningConfigArn) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateCodeSigningConfigRequest, ____codeSigningPolicies) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateCodeSigningConfigRequest, ____description) == 0x50, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::UpdateCodeSigningConfigRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::UpdateCodeSigningConfigRequest*, "Amazon.Lambda.Model", "UpdateCodeSigningConfigRequest");
