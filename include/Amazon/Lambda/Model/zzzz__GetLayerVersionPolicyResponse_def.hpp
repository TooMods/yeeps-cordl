#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetLayerVersionPolicyResponse)
// Forward declare root types
namespace Amazon::Lambda::Model {
class GetLayerVersionPolicyResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::GetLayerVersionPolicyResponse);
// Type: Amazon.Lambda.Model::GetLayerVersionPolicyResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::GetLayerVersionPolicyResponse*
class CORDL_TYPE GetLayerVersionPolicyResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_Policy, put = set_Policy))::StringW Policy;

  __declspec(property(get = get_RevisionId, put = set_RevisionId))::StringW RevisionId;

  /// @brief Field _policy, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__policy, put = __cordl_internal_set__policy))::StringW _policy;

  /// @brief Field _revisionId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__revisionId, put = __cordl_internal_set__revisionId))::StringW _revisionId;

  /// @brief Method IsSetPolicy, addr 0x2bcbbc4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetPolicy();

  /// @brief Method IsSetRevisionId, addr 0x2bcbbe4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRevisionId();

  static inline ::Amazon::Lambda::Model::GetLayerVersionPolicyResponse* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__policy() const;

  constexpr ::StringW& __cordl_internal_get__policy();

  constexpr ::StringW const& __cordl_internal_get__revisionId() const;

  constexpr ::StringW& __cordl_internal_get__revisionId();

  constexpr void __cordl_internal_set__policy(::StringW value);

  constexpr void __cordl_internal_set__revisionId(::StringW value);

  /// @brief Method .ctor, addr 0x2bcbbf4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Policy, addr 0x2bcbbb4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Policy();

  /// @brief Method get_RevisionId, addr 0x2bcbbd4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RevisionId();

  /// @brief Method set_Policy, addr 0x2bcbbbc, size 0x8, virtual false, abstract: false, final false
  inline void set_Policy(::StringW value);

  /// @brief Method set_RevisionId, addr 0x2bcbbdc, size 0x8, virtual false, abstract: false, final false
  inline void set_RevisionId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetLayerVersionPolicyResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetLayerVersionPolicyResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetLayerVersionPolicyResponse(GetLayerVersionPolicyResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetLayerVersionPolicyResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetLayerVersionPolicyResponse(GetLayerVersionPolicyResponse const&) = delete;

  /// @brief Field _policy, offset: 0x28, size: 0x8, def value: None
  ::StringW ____policy;

  /// @brief Field _revisionId, offset: 0x30, size: 0x8, def value: None
  ::StringW ____revisionId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::GetLayerVersionPolicyResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetLayerVersionPolicyResponse, ____policy) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetLayerVersionPolicyResponse, ____revisionId) == 0x30, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::GetLayerVersionPolicyResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::GetLayerVersionPolicyResponse*, "Amazon.Lambda.Model", "GetLayerVersionPolicyResponse");
