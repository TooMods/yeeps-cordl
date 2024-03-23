#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CodeSigningConfig)
namespace Amazon::Lambda::Model {
class AllowedPublishers;
}
namespace Amazon::Lambda::Model {
class CodeSigningPolicies;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class CodeSigningConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::CodeSigningConfig);
// Type: Amazon.Lambda.Model::CodeSigningConfig
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::CodeSigningConfig*
class CORDL_TYPE CodeSigningConfig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AllowedPublishers, put = set_AllowedPublishers))::Amazon::Lambda::Model::AllowedPublishers* AllowedPublishers;

  __declspec(property(get = get_CodeSigningConfigArn, put = set_CodeSigningConfigArn))::StringW CodeSigningConfigArn;

  __declspec(property(get = get_CodeSigningConfigId, put = set_CodeSigningConfigId))::StringW CodeSigningConfigId;

  __declspec(property(get = get_CodeSigningPolicies, put = set_CodeSigningPolicies))::Amazon::Lambda::Model::CodeSigningPolicies* CodeSigningPolicies;

  __declspec(property(get = get_Description, put = set_Description))::StringW Description;

  __declspec(property(get = get_LastModified, put = set_LastModified))::StringW LastModified;

  /// @brief Field _allowedPublishers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__allowedPublishers, put = __cordl_internal_set__allowedPublishers))::Amazon::Lambda::Model::AllowedPublishers* _allowedPublishers;

  /// @brief Field _codeSigningConfigArn, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__codeSigningConfigArn, put = __cordl_internal_set__codeSigningConfigArn))::StringW _codeSigningConfigArn;

  /// @brief Field _codeSigningConfigId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__codeSigningConfigId, put = __cordl_internal_set__codeSigningConfigId))::StringW _codeSigningConfigId;

  /// @brief Field _codeSigningPolicies, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__codeSigningPolicies, put = __cordl_internal_set__codeSigningPolicies))::Amazon::Lambda::Model::CodeSigningPolicies* _codeSigningPolicies;

  /// @brief Field _description, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__description, put = __cordl_internal_set__description))::StringW _description;

  /// @brief Field _lastModified, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lastModified, put = __cordl_internal_set__lastModified))::StringW _lastModified;

  /// @brief Method IsSetAllowedPublishers, addr 0x2bc46b8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetAllowedPublishers();

  /// @brief Method IsSetCodeSigningConfigArn, addr 0x2bc46d8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCodeSigningConfigArn();

  /// @brief Method IsSetCodeSigningConfigId, addr 0x2bc46f8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCodeSigningConfigId();

  /// @brief Method IsSetCodeSigningPolicies, addr 0x2bc4718, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCodeSigningPolicies();

  /// @brief Method IsSetDescription, addr 0x2bc4738, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDescription();

  /// @brief Method IsSetLastModified, addr 0x2bc4758, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLastModified();

  static inline ::Amazon::Lambda::Model::CodeSigningConfig* New_ctor();

  constexpr ::Amazon::Lambda::Model::AllowedPublishers*& __cordl_internal_get__allowedPublishers();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::AllowedPublishers*> const& __cordl_internal_get__allowedPublishers() const;

  constexpr ::StringW const& __cordl_internal_get__codeSigningConfigArn() const;

  constexpr ::StringW& __cordl_internal_get__codeSigningConfigArn();

  constexpr ::StringW const& __cordl_internal_get__codeSigningConfigId() const;

  constexpr ::StringW& __cordl_internal_get__codeSigningConfigId();

  constexpr ::Amazon::Lambda::Model::CodeSigningPolicies*& __cordl_internal_get__codeSigningPolicies();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::CodeSigningPolicies*> const& __cordl_internal_get__codeSigningPolicies() const;

  constexpr ::StringW const& __cordl_internal_get__description() const;

  constexpr ::StringW& __cordl_internal_get__description();

  constexpr ::StringW const& __cordl_internal_get__lastModified() const;

  constexpr ::StringW& __cordl_internal_get__lastModified();

  constexpr void __cordl_internal_set__allowedPublishers(::Amazon::Lambda::Model::AllowedPublishers* value);

  constexpr void __cordl_internal_set__codeSigningConfigArn(::StringW value);

  constexpr void __cordl_internal_set__codeSigningConfigId(::StringW value);

  constexpr void __cordl_internal_set__codeSigningPolicies(::Amazon::Lambda::Model::CodeSigningPolicies* value);

  constexpr void __cordl_internal_set__description(::StringW value);

  constexpr void __cordl_internal_set__lastModified(::StringW value);

  /// @brief Method .ctor, addr 0x2bc4768, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AllowedPublishers, addr 0x2bc46a8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::AllowedPublishers* get_AllowedPublishers();

  /// @brief Method get_CodeSigningConfigArn, addr 0x2bc46c8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CodeSigningConfigArn();

  /// @brief Method get_CodeSigningConfigId, addr 0x2bc46e8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CodeSigningConfigId();

  /// @brief Method get_CodeSigningPolicies, addr 0x2bc4708, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::CodeSigningPolicies* get_CodeSigningPolicies();

  /// @brief Method get_Description, addr 0x2bc4728, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Description();

  /// @brief Method get_LastModified, addr 0x2bc4748, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LastModified();

  /// @brief Method set_AllowedPublishers, addr 0x2bc46b0, size 0x8, virtual false, abstract: false, final false
  inline void set_AllowedPublishers(::Amazon::Lambda::Model::AllowedPublishers* value);

  /// @brief Method set_CodeSigningConfigArn, addr 0x2bc46d0, size 0x8, virtual false, abstract: false, final false
  inline void set_CodeSigningConfigArn(::StringW value);

  /// @brief Method set_CodeSigningConfigId, addr 0x2bc46f0, size 0x8, virtual false, abstract: false, final false
  inline void set_CodeSigningConfigId(::StringW value);

  /// @brief Method set_CodeSigningPolicies, addr 0x2bc4710, size 0x8, virtual false, abstract: false, final false
  inline void set_CodeSigningPolicies(::Amazon::Lambda::Model::CodeSigningPolicies* value);

  /// @brief Method set_Description, addr 0x2bc4730, size 0x8, virtual false, abstract: false, final false
  inline void set_Description(::StringW value);

  /// @brief Method set_LastModified, addr 0x2bc4750, size 0x8, virtual false, abstract: false, final false
  inline void set_LastModified(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CodeSigningConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CodeSigningConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CodeSigningConfig(CodeSigningConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CodeSigningConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CodeSigningConfig(CodeSigningConfig const&) = delete;

  /// @brief Field _allowedPublishers, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Lambda::Model::AllowedPublishers* ____allowedPublishers;

  /// @brief Field _codeSigningConfigArn, offset: 0x18, size: 0x8, def value: None
  ::StringW ____codeSigningConfigArn;

  /// @brief Field _codeSigningConfigId, offset: 0x20, size: 0x8, def value: None
  ::StringW ____codeSigningConfigId;

  /// @brief Field _codeSigningPolicies, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Lambda::Model::CodeSigningPolicies* ____codeSigningPolicies;

  /// @brief Field _description, offset: 0x30, size: 0x8, def value: None
  ::StringW ____description;

  /// @brief Field _lastModified, offset: 0x38, size: 0x8, def value: None
  ::StringW ____lastModified;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::CodeSigningConfig, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CodeSigningConfig, ____allowedPublishers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CodeSigningConfig, ____codeSigningConfigArn) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CodeSigningConfig, ____codeSigningConfigId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CodeSigningConfig, ____codeSigningPolicies) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CodeSigningConfig, ____description) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CodeSigningConfig, ____lastModified) == 0x38, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::CodeSigningConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::CodeSigningConfig*, "Amazon.Lambda.Model", "CodeSigningConfig");
