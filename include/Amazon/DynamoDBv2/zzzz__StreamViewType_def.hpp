#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StreamViewType)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class StreamViewType;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::StreamViewType);
// Type: Amazon.DynamoDBv2::StreamViewType
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::StreamViewType*
class CORDL_TYPE StreamViewType : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field KEYS_ONLY, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_KEYS_ONLY, put = setStaticF_KEYS_ONLY))::Amazon::DynamoDBv2::StreamViewType* KEYS_ONLY;

  /// @brief Field NEW_AND_OLD_IMAGES, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NEW_AND_OLD_IMAGES, put = setStaticF_NEW_AND_OLD_IMAGES))::Amazon::DynamoDBv2::StreamViewType* NEW_AND_OLD_IMAGES;

  /// @brief Field NEW_IMAGE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NEW_IMAGE, put = setStaticF_NEW_IMAGE))::Amazon::DynamoDBv2::StreamViewType* NEW_IMAGE;

  /// @brief Field OLD_IMAGE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OLD_IMAGE, put = setStaticF_OLD_IMAGE))::Amazon::DynamoDBv2::StreamViewType* OLD_IMAGE;

  /// @brief Method FindValue, addr 0x1213848, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::StreamViewType* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::StreamViewType* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x12137e0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::StreamViewType* getStaticF_KEYS_ONLY();

  static inline ::Amazon::DynamoDBv2::StreamViewType* getStaticF_NEW_AND_OLD_IMAGES();

  static inline ::Amazon::DynamoDBv2::StreamViewType* getStaticF_NEW_IMAGE();

  static inline ::Amazon::DynamoDBv2::StreamViewType* getStaticF_OLD_IMAGE();

  /// @brief Method op_Implicit, addr 0x12138b4, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::StreamViewType* op_Implicit___Amazon__DynamoDBv2__StreamViewType_(::StringW value);

  static inline void setStaticF_KEYS_ONLY(::Amazon::DynamoDBv2::StreamViewType* value);

  static inline void setStaticF_NEW_AND_OLD_IMAGES(::Amazon::DynamoDBv2::StreamViewType* value);

  static inline void setStaticF_NEW_IMAGE(::Amazon::DynamoDBv2::StreamViewType* value);

  static inline void setStaticF_OLD_IMAGE(::Amazon::DynamoDBv2::StreamViewType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamViewType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StreamViewType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StreamViewType(StreamViewType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StreamViewType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StreamViewType(StreamViewType const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::StreamViewType, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::StreamViewType);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::StreamViewType*, "Amazon.DynamoDBv2", "StreamViewType");
