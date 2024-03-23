#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(S3SseAlgorithm)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class S3SseAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::S3SseAlgorithm);
// Type: Amazon.DynamoDBv2::S3SseAlgorithm
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::S3SseAlgorithm*
class CORDL_TYPE S3SseAlgorithm : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field AES256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AES256, put = setStaticF_AES256))::Amazon::DynamoDBv2::S3SseAlgorithm* AES256;

  /// @brief Field KMS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_KMS, put = setStaticF_KMS))::Amazon::DynamoDBv2::S3SseAlgorithm* KMS;

  /// @brief Method FindValue, addr 0x1212dd8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::S3SseAlgorithm* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::S3SseAlgorithm* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1212d70, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::S3SseAlgorithm* getStaticF_AES256();

  static inline ::Amazon::DynamoDBv2::S3SseAlgorithm* getStaticF_KMS();

  /// @brief Method op_Implicit, addr 0x1212e44, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::S3SseAlgorithm* op_Implicit___Amazon__DynamoDBv2__S3SseAlgorithm_(::StringW value);

  static inline void setStaticF_AES256(::Amazon::DynamoDBv2::S3SseAlgorithm* value);

  static inline void setStaticF_KMS(::Amazon::DynamoDBv2::S3SseAlgorithm* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr S3SseAlgorithm();

public:
  // Ctor Parameters [CppParam { name: "", ty: "S3SseAlgorithm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  S3SseAlgorithm(S3SseAlgorithm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "S3SseAlgorithm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  S3SseAlgorithm(S3SseAlgorithm const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::S3SseAlgorithm, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::S3SseAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::S3SseAlgorithm*, "Amazon.DynamoDBv2", "S3SseAlgorithm");
