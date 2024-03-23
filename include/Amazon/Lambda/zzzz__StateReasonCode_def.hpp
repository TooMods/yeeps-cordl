#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StateReasonCode)
// Forward declare root types
namespace Amazon::Lambda {
class StateReasonCode;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::StateReasonCode);
// Type: Amazon.Lambda::StateReasonCode
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::StateReasonCode*
class CORDL_TYPE StateReasonCode : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field Creating, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Creating, put = setStaticF_Creating))::Amazon::Lambda::StateReasonCode* Creating;

  /// @brief Field EniLimitExceeded, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EniLimitExceeded, put = setStaticF_EniLimitExceeded))::Amazon::Lambda::StateReasonCode* EniLimitExceeded;

  /// @brief Field Idle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Idle, put = setStaticF_Idle))::Amazon::Lambda::StateReasonCode* Idle;

  /// @brief Field ImageAccessDenied, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ImageAccessDenied, put = setStaticF_ImageAccessDenied))::Amazon::Lambda::StateReasonCode* ImageAccessDenied;

  /// @brief Field ImageDeleted, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ImageDeleted, put = setStaticF_ImageDeleted))::Amazon::Lambda::StateReasonCode* ImageDeleted;

  /// @brief Field InsufficientRolePermissions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InsufficientRolePermissions, put = setStaticF_InsufficientRolePermissions))::Amazon::Lambda::StateReasonCode* InsufficientRolePermissions;

  /// @brief Field InternalError, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InternalError, put = setStaticF_InternalError))::Amazon::Lambda::StateReasonCode* InternalError;

  /// @brief Field InvalidConfiguration, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InvalidConfiguration, put = setStaticF_InvalidConfiguration))::Amazon::Lambda::StateReasonCode* InvalidConfiguration;

  /// @brief Field InvalidImage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InvalidImage, put = setStaticF_InvalidImage))::Amazon::Lambda::StateReasonCode* InvalidImage;

  /// @brief Field InvalidSecurityGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InvalidSecurityGroup, put = setStaticF_InvalidSecurityGroup))::Amazon::Lambda::StateReasonCode* InvalidSecurityGroup;

  /// @brief Field InvalidSubnet, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InvalidSubnet, put = setStaticF_InvalidSubnet))::Amazon::Lambda::StateReasonCode* InvalidSubnet;

  /// @brief Field Restoring, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Restoring, put = setStaticF_Restoring))::Amazon::Lambda::StateReasonCode* Restoring;

  /// @brief Field SubnetOutOfIPAddresses, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SubnetOutOfIPAddresses, put = setStaticF_SubnetOutOfIPAddresses))::Amazon::Lambda::StateReasonCode* SubnetOutOfIPAddresses;

  /// @brief Method FindValue, addr 0x2bb72a4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::StateReasonCode* FindValue(::StringW value);

  static inline ::Amazon::Lambda::StateReasonCode* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x2bb723c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::Lambda::StateReasonCode* getStaticF_Creating();

  static inline ::Amazon::Lambda::StateReasonCode* getStaticF_EniLimitExceeded();

  static inline ::Amazon::Lambda::StateReasonCode* getStaticF_Idle();

  static inline ::Amazon::Lambda::StateReasonCode* getStaticF_ImageAccessDenied();

  static inline ::Amazon::Lambda::StateReasonCode* getStaticF_ImageDeleted();

  static inline ::Amazon::Lambda::StateReasonCode* getStaticF_InsufficientRolePermissions();

  static inline ::Amazon::Lambda::StateReasonCode* getStaticF_InternalError();

  static inline ::Amazon::Lambda::StateReasonCode* getStaticF_InvalidConfiguration();

  static inline ::Amazon::Lambda::StateReasonCode* getStaticF_InvalidImage();

  static inline ::Amazon::Lambda::StateReasonCode* getStaticF_InvalidSecurityGroup();

  static inline ::Amazon::Lambda::StateReasonCode* getStaticF_InvalidSubnet();

  static inline ::Amazon::Lambda::StateReasonCode* getStaticF_Restoring();

  static inline ::Amazon::Lambda::StateReasonCode* getStaticF_SubnetOutOfIPAddresses();

  /// @brief Method op_Implicit, addr 0x2bb7310, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::StateReasonCode* op_Implicit___Amazon__Lambda__StateReasonCode_(::StringW value);

  static inline void setStaticF_Creating(::Amazon::Lambda::StateReasonCode* value);

  static inline void setStaticF_EniLimitExceeded(::Amazon::Lambda::StateReasonCode* value);

  static inline void setStaticF_Idle(::Amazon::Lambda::StateReasonCode* value);

  static inline void setStaticF_ImageAccessDenied(::Amazon::Lambda::StateReasonCode* value);

  static inline void setStaticF_ImageDeleted(::Amazon::Lambda::StateReasonCode* value);

  static inline void setStaticF_InsufficientRolePermissions(::Amazon::Lambda::StateReasonCode* value);

  static inline void setStaticF_InternalError(::Amazon::Lambda::StateReasonCode* value);

  static inline void setStaticF_InvalidConfiguration(::Amazon::Lambda::StateReasonCode* value);

  static inline void setStaticF_InvalidImage(::Amazon::Lambda::StateReasonCode* value);

  static inline void setStaticF_InvalidSecurityGroup(::Amazon::Lambda::StateReasonCode* value);

  static inline void setStaticF_InvalidSubnet(::Amazon::Lambda::StateReasonCode* value);

  static inline void setStaticF_Restoring(::Amazon::Lambda::StateReasonCode* value);

  static inline void setStaticF_SubnetOutOfIPAddresses(::Amazon::Lambda::StateReasonCode* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StateReasonCode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StateReasonCode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StateReasonCode(StateReasonCode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StateReasonCode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StateReasonCode(StateReasonCode const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::StateReasonCode, 0x18>, "Size mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::StateReasonCode);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::StateReasonCode*, "Amazon.Lambda", "StateReasonCode");
