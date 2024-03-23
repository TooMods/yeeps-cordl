#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LastUpdateStatusReasonCode)
// Forward declare root types
namespace Amazon::Lambda {
class LastUpdateStatusReasonCode;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::LastUpdateStatusReasonCode);
// Type: Amazon.Lambda::LastUpdateStatusReasonCode
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::LastUpdateStatusReasonCode*
class CORDL_TYPE LastUpdateStatusReasonCode : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field EniLimitExceeded, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EniLimitExceeded, put = setStaticF_EniLimitExceeded))::Amazon::Lambda::LastUpdateStatusReasonCode* EniLimitExceeded;

  /// @brief Field ImageAccessDenied, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ImageAccessDenied, put = setStaticF_ImageAccessDenied))::Amazon::Lambda::LastUpdateStatusReasonCode* ImageAccessDenied;

  /// @brief Field ImageDeleted, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ImageDeleted, put = setStaticF_ImageDeleted))::Amazon::Lambda::LastUpdateStatusReasonCode* ImageDeleted;

  /// @brief Field InsufficientRolePermissions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InsufficientRolePermissions, put = setStaticF_InsufficientRolePermissions))::Amazon::Lambda::LastUpdateStatusReasonCode* InsufficientRolePermissions;

  /// @brief Field InternalError, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InternalError, put = setStaticF_InternalError))::Amazon::Lambda::LastUpdateStatusReasonCode* InternalError;

  /// @brief Field InvalidConfiguration, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InvalidConfiguration, put = setStaticF_InvalidConfiguration))::Amazon::Lambda::LastUpdateStatusReasonCode* InvalidConfiguration;

  /// @brief Field InvalidImage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InvalidImage, put = setStaticF_InvalidImage))::Amazon::Lambda::LastUpdateStatusReasonCode* InvalidImage;

  /// @brief Field InvalidSecurityGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InvalidSecurityGroup, put = setStaticF_InvalidSecurityGroup))::Amazon::Lambda::LastUpdateStatusReasonCode* InvalidSecurityGroup;

  /// @brief Field InvalidSubnet, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InvalidSubnet, put = setStaticF_InvalidSubnet))::Amazon::Lambda::LastUpdateStatusReasonCode* InvalidSubnet;

  /// @brief Field SubnetOutOfIPAddresses, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SubnetOutOfIPAddresses, put = setStaticF_SubnetOutOfIPAddresses))::Amazon::Lambda::LastUpdateStatusReasonCode* SubnetOutOfIPAddresses;

  /// @brief Method FindValue, addr 0x2bb5e38, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::LastUpdateStatusReasonCode* FindValue(::StringW value);

  static inline ::Amazon::Lambda::LastUpdateStatusReasonCode* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x2bb5dd0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::Lambda::LastUpdateStatusReasonCode* getStaticF_EniLimitExceeded();

  static inline ::Amazon::Lambda::LastUpdateStatusReasonCode* getStaticF_ImageAccessDenied();

  static inline ::Amazon::Lambda::LastUpdateStatusReasonCode* getStaticF_ImageDeleted();

  static inline ::Amazon::Lambda::LastUpdateStatusReasonCode* getStaticF_InsufficientRolePermissions();

  static inline ::Amazon::Lambda::LastUpdateStatusReasonCode* getStaticF_InternalError();

  static inline ::Amazon::Lambda::LastUpdateStatusReasonCode* getStaticF_InvalidConfiguration();

  static inline ::Amazon::Lambda::LastUpdateStatusReasonCode* getStaticF_InvalidImage();

  static inline ::Amazon::Lambda::LastUpdateStatusReasonCode* getStaticF_InvalidSecurityGroup();

  static inline ::Amazon::Lambda::LastUpdateStatusReasonCode* getStaticF_InvalidSubnet();

  static inline ::Amazon::Lambda::LastUpdateStatusReasonCode* getStaticF_SubnetOutOfIPAddresses();

  /// @brief Method op_Implicit, addr 0x2bb5ea4, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::LastUpdateStatusReasonCode* op_Implicit___Amazon__Lambda__LastUpdateStatusReasonCode_(::StringW value);

  static inline void setStaticF_EniLimitExceeded(::Amazon::Lambda::LastUpdateStatusReasonCode* value);

  static inline void setStaticF_ImageAccessDenied(::Amazon::Lambda::LastUpdateStatusReasonCode* value);

  static inline void setStaticF_ImageDeleted(::Amazon::Lambda::LastUpdateStatusReasonCode* value);

  static inline void setStaticF_InsufficientRolePermissions(::Amazon::Lambda::LastUpdateStatusReasonCode* value);

  static inline void setStaticF_InternalError(::Amazon::Lambda::LastUpdateStatusReasonCode* value);

  static inline void setStaticF_InvalidConfiguration(::Amazon::Lambda::LastUpdateStatusReasonCode* value);

  static inline void setStaticF_InvalidImage(::Amazon::Lambda::LastUpdateStatusReasonCode* value);

  static inline void setStaticF_InvalidSecurityGroup(::Amazon::Lambda::LastUpdateStatusReasonCode* value);

  static inline void setStaticF_InvalidSubnet(::Amazon::Lambda::LastUpdateStatusReasonCode* value);

  static inline void setStaticF_SubnetOutOfIPAddresses(::Amazon::Lambda::LastUpdateStatusReasonCode* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LastUpdateStatusReasonCode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LastUpdateStatusReasonCode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LastUpdateStatusReasonCode(LastUpdateStatusReasonCode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LastUpdateStatusReasonCode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LastUpdateStatusReasonCode(LastUpdateStatusReasonCode const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::LastUpdateStatusReasonCode, 0x18>, "Size mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::LastUpdateStatusReasonCode);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::LastUpdateStatusReasonCode*, "Amazon.Lambda", "LastUpdateStatusReasonCode");
