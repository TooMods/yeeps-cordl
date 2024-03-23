#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__ConversionSchema_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AWSConfigsDynamoDB)
namespace Amazon::DynamoDBv2 {
struct ConversionSchema;
}
namespace Amazon::Util {
class DynamoDBContextConfig;
}
// Forward declare root types
namespace Amazon {
class AWSConfigsDynamoDB;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::AWSConfigsDynamoDB);
// Type: Amazon::AWSConfigsDynamoDB
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon {
// Is value type: false
// CS Name: ::Amazon::AWSConfigsDynamoDB*
class CORDL_TYPE AWSConfigsDynamoDB : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Context>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__Context_k__BackingField, put = setStaticF__Context_k__BackingField))::Amazon::Util::DynamoDBContextConfig* _Context_k__BackingField;

  /// @brief Field <ConversionSchema>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ConversionSchema_k__BackingField,
                             put = setStaticF__ConversionSchema_k__BackingField))::Amazon::DynamoDBv2::ConversionSchema _ConversionSchema_k__BackingField;

  static inline ::Amazon::Util::DynamoDBContextConfig* getStaticF__Context_k__BackingField();

  static inline ::Amazon::DynamoDBv2::ConversionSchema getStaticF__ConversionSchema_k__BackingField();

  /// @brief Method get_Context, addr 0x1207b90, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Util::DynamoDBContextConfig* get_Context();

  /// @brief Method get_ConversionSchema, addr 0x1207adc, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ConversionSchema get_ConversionSchema();

  /// @brief Method get_DynamoDBContextTableNamePrefix, addr 0x12079b0, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW get_DynamoDBContextTableNamePrefix();

  static inline void setStaticF__Context_k__BackingField(::Amazon::Util::DynamoDBContextConfig* value);

  static inline void setStaticF__ConversionSchema_k__BackingField(::Amazon::DynamoDBv2::ConversionSchema value);

  /// @brief Method set_Context, addr 0x1207be8, size 0x5c, virtual false, abstract: false, final false
  static inline void set_Context(::Amazon::Util::DynamoDBContextConfig* value);

  /// @brief Method set_ConversionSchema, addr 0x1207b34, size 0x5c, virtual false, abstract: false, final false
  static inline void set_ConversionSchema(::Amazon::DynamoDBv2::ConversionSchema value);

  /// @brief Method set_DynamoDBContextTableNamePrefix, addr 0x1207a44, size 0x98, virtual false, abstract: false, final false
  static inline void set_DynamoDBContextTableNamePrefix(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AWSConfigsDynamoDB();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AWSConfigsDynamoDB", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AWSConfigsDynamoDB(AWSConfigsDynamoDB&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AWSConfigsDynamoDB", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AWSConfigsDynamoDB(AWSConfigsDynamoDB const&) = delete;

  /// @brief Field DynamoDBContextTableNamePrefixKey offset 0xffffffff size 0x8
  static constexpr ::ConstString DynamoDBContextTableNamePrefixKey{ u"AWS.DynamoDBContext.TableNamePrefix" };

  /// @brief Field dynamoDBKey offset 0xffffffff size 0x8
  static constexpr ::ConstString dynamoDBKey{ u"dynamoDB" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::AWSConfigsDynamoDB, 0x10>, "Size mismatch!");

} // namespace Amazon
NEED_NO_BOX(::Amazon::AWSConfigsDynamoDB);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::AWSConfigsDynamoDB*, "Amazon", "AWSConfigsDynamoDB");
