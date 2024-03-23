#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SourceAccessType)
// Forward declare root types
namespace Amazon::Lambda {
class SourceAccessType;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::SourceAccessType);
// Type: Amazon.Lambda::SourceAccessType
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::SourceAccessType*
class CORDL_TYPE SourceAccessType : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field BASIC_AUTH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BASIC_AUTH, put = setStaticF_BASIC_AUTH))::Amazon::Lambda::SourceAccessType* BASIC_AUTH;

  /// @brief Field SASL_SCRAM_256_AUTH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SASL_SCRAM_256_AUTH, put = setStaticF_SASL_SCRAM_256_AUTH))::Amazon::Lambda::SourceAccessType* SASL_SCRAM_256_AUTH;

  /// @brief Field SASL_SCRAM_512_AUTH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SASL_SCRAM_512_AUTH, put = setStaticF_SASL_SCRAM_512_AUTH))::Amazon::Lambda::SourceAccessType* SASL_SCRAM_512_AUTH;

  /// @brief Field VIRTUAL_HOST, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VIRTUAL_HOST, put = setStaticF_VIRTUAL_HOST))::Amazon::Lambda::SourceAccessType* VIRTUAL_HOST;

  /// @brief Field VPC_SECURITY_GROUP, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VPC_SECURITY_GROUP, put = setStaticF_VPC_SECURITY_GROUP))::Amazon::Lambda::SourceAccessType* VPC_SECURITY_GROUP;

  /// @brief Field VPC_SUBNET, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VPC_SUBNET, put = setStaticF_VPC_SUBNET))::Amazon::Lambda::SourceAccessType* VPC_SUBNET;

  /// @brief Method FindValue, addr 0x2bb6dbc, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::SourceAccessType* FindValue(::StringW value);

  static inline ::Amazon::Lambda::SourceAccessType* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x2bb6d54, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::Lambda::SourceAccessType* getStaticF_BASIC_AUTH();

  static inline ::Amazon::Lambda::SourceAccessType* getStaticF_SASL_SCRAM_256_AUTH();

  static inline ::Amazon::Lambda::SourceAccessType* getStaticF_SASL_SCRAM_512_AUTH();

  static inline ::Amazon::Lambda::SourceAccessType* getStaticF_VIRTUAL_HOST();

  static inline ::Amazon::Lambda::SourceAccessType* getStaticF_VPC_SECURITY_GROUP();

  static inline ::Amazon::Lambda::SourceAccessType* getStaticF_VPC_SUBNET();

  /// @brief Method op_Implicit, addr 0x2bb6e28, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::SourceAccessType* op_Implicit___Amazon__Lambda__SourceAccessType_(::StringW value);

  static inline void setStaticF_BASIC_AUTH(::Amazon::Lambda::SourceAccessType* value);

  static inline void setStaticF_SASL_SCRAM_256_AUTH(::Amazon::Lambda::SourceAccessType* value);

  static inline void setStaticF_SASL_SCRAM_512_AUTH(::Amazon::Lambda::SourceAccessType* value);

  static inline void setStaticF_VIRTUAL_HOST(::Amazon::Lambda::SourceAccessType* value);

  static inline void setStaticF_VPC_SECURITY_GROUP(::Amazon::Lambda::SourceAccessType* value);

  static inline void setStaticF_VPC_SUBNET(::Amazon::Lambda::SourceAccessType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SourceAccessType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SourceAccessType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SourceAccessType(SourceAccessType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SourceAccessType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SourceAccessType(SourceAccessType const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::SourceAccessType, 0x18>, "Size mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::SourceAccessType);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::SourceAccessType*, "Amazon.Lambda", "SourceAccessType");
