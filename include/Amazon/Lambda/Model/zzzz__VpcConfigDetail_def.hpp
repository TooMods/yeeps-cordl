#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VpcConfigDetail)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class VpcConfigDetail;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::VpcConfigDetail);
// Type: Amazon.Lambda.Model::VpcConfigDetail
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::VpcConfigDetail*
class CORDL_TYPE VpcConfigDetail : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_SecurityGroupIds, put = set_SecurityGroupIds))::System::Collections::Generic::List_1<::StringW>* SecurityGroupIds;

  __declspec(property(get = get_SubnetIds, put = set_SubnetIds))::System::Collections::Generic::List_1<::StringW>* SubnetIds;

  __declspec(property(get = get_VpcId, put = set_VpcId))::StringW VpcId;

  /// @brief Field _securityGroupIds, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__securityGroupIds, put = __cordl_internal_set__securityGroupIds))::System::Collections::Generic::List_1<::StringW>* _securityGroupIds;

  /// @brief Field _subnetIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__subnetIds, put = __cordl_internal_set__subnetIds))::System::Collections::Generic::List_1<::StringW>* _subnetIds;

  /// @brief Field _vpcId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__vpcId, put = __cordl_internal_set__vpcId))::StringW _vpcId;

  /// @brief Method IsSetSecurityGroupIds, addr 0x310cf60, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetSecurityGroupIds();

  /// @brief Method IsSetSubnetIds, addr 0x310cfc4, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetSubnetIds();

  /// @brief Method IsSetVpcId, addr 0x310d028, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetVpcId();

  static inline ::Amazon::Lambda::Model::VpcConfigDetail* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__securityGroupIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__securityGroupIds() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__subnetIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__subnetIds() const;

  constexpr ::StringW const& __cordl_internal_get__vpcId() const;

  constexpr ::StringW& __cordl_internal_get__vpcId();

  constexpr void __cordl_internal_set__securityGroupIds(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__subnetIds(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__vpcId(::StringW value);

  /// @brief Method .ctor, addr 0x310d038, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_SecurityGroupIds, addr 0x310cf50, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_SecurityGroupIds();

  /// @brief Method get_SubnetIds, addr 0x310cfb4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_SubnetIds();

  /// @brief Method get_VpcId, addr 0x310d018, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_VpcId();

  /// @brief Method set_SecurityGroupIds, addr 0x310cf58, size 0x8, virtual false, abstract: false, final false
  inline void set_SecurityGroupIds(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_SubnetIds, addr 0x310cfbc, size 0x8, virtual false, abstract: false, final false
  inline void set_SubnetIds(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_VpcId, addr 0x310d020, size 0x8, virtual false, abstract: false, final false
  inline void set_VpcId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VpcConfigDetail();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VpcConfigDetail", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VpcConfigDetail(VpcConfigDetail&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VpcConfigDetail", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VpcConfigDetail(VpcConfigDetail const&) = delete;

  /// @brief Field _securityGroupIds, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____securityGroupIds;

  /// @brief Field _subnetIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____subnetIds;

  /// @brief Field _vpcId, offset: 0x20, size: 0x8, def value: None
  ::StringW ____vpcId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::VpcConfigDetail, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::VpcConfigDetail, ____securityGroupIds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::VpcConfigDetail, ____subnetIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::VpcConfigDetail, ____vpcId) == 0x20, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::VpcConfigDetail);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::VpcConfigDetail*, "Amazon.Lambda.Model", "VpcConfigDetail");
