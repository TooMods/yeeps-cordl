#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PublishVersionRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class PublishVersionRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::PublishVersionRequest);
// Type: Amazon.Lambda.Model::PublishVersionRequest
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::PublishVersionRequest*
class CORDL_TYPE PublishVersionRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_CodeSha256, put = set_CodeSha256))::StringW CodeSha256;

  __declspec(property(get = get_Description, put = set_Description))::StringW Description;

  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  __declspec(property(get = get_RevisionId, put = set_RevisionId))::StringW RevisionId;

  /// @brief Field _codeSha256, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__codeSha256, put = __cordl_internal_set__codeSha256))::StringW _codeSha256;

  /// @brief Field _description, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__description, put = __cordl_internal_set__description))::StringW _description;

  /// @brief Field _functionName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Field _revisionId, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__revisionId, put = __cordl_internal_set__revisionId))::StringW _revisionId;

  /// @brief Method IsSetCodeSha256, addr 0x2bcf2c0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCodeSha256();

  /// @brief Method IsSetDescription, addr 0x2bcf2e0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDescription();

  /// @brief Method IsSetFunctionName, addr 0x2bcf300, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  /// @brief Method IsSetRevisionId, addr 0x2bcf320, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRevisionId();

  static inline ::Amazon::Lambda::Model::PublishVersionRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__codeSha256() const;

  constexpr ::StringW& __cordl_internal_get__codeSha256();

  constexpr ::StringW const& __cordl_internal_get__description() const;

  constexpr ::StringW& __cordl_internal_get__description();

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr ::StringW const& __cordl_internal_get__revisionId() const;

  constexpr ::StringW& __cordl_internal_get__revisionId();

  constexpr void __cordl_internal_set__codeSha256(::StringW value);

  constexpr void __cordl_internal_set__description(::StringW value);

  constexpr void __cordl_internal_set__functionName(::StringW value);

  constexpr void __cordl_internal_set__revisionId(::StringW value);

  /// @brief Method .ctor, addr 0x2bcf330, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CodeSha256, addr 0x2bcf2b0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CodeSha256();

  /// @brief Method get_Description, addr 0x2bcf2d0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Description();

  /// @brief Method get_FunctionName, addr 0x2bcf2f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method get_RevisionId, addr 0x2bcf310, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RevisionId();

  /// @brief Method set_CodeSha256, addr 0x2bcf2b8, size 0x8, virtual false, abstract: false, final false
  inline void set_CodeSha256(::StringW value);

  /// @brief Method set_Description, addr 0x2bcf2d8, size 0x8, virtual false, abstract: false, final false
  inline void set_Description(::StringW value);

  /// @brief Method set_FunctionName, addr 0x2bcf2f8, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

  /// @brief Method set_RevisionId, addr 0x2bcf318, size 0x8, virtual false, abstract: false, final false
  inline void set_RevisionId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PublishVersionRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PublishVersionRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PublishVersionRequest(PublishVersionRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PublishVersionRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PublishVersionRequest(PublishVersionRequest const&) = delete;

  /// @brief Field _codeSha256, offset: 0x38, size: 0x8, def value: None
  ::StringW ____codeSha256;

  /// @brief Field _description, offset: 0x40, size: 0x8, def value: None
  ::StringW ____description;

  /// @brief Field _functionName, offset: 0x48, size: 0x8, def value: None
  ::StringW ____functionName;

  /// @brief Field _revisionId, offset: 0x50, size: 0x8, def value: None
  ::StringW ____revisionId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::PublishVersionRequest, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PublishVersionRequest, ____codeSha256) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PublishVersionRequest, ____description) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PublishVersionRequest, ____functionName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PublishVersionRequest, ____revisionId) == 0x50, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::PublishVersionRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::PublishVersionRequest*, "Amazon.Lambda.Model", "PublishVersionRequest");
