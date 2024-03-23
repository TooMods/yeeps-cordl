#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AmazonDynamoDBStreamsMetadata)
namespace Amazon::Runtime::Internal {
class IServiceMetadata;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Internal {
class AmazonDynamoDBStreamsMetadata;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Internal::AmazonDynamoDBStreamsMetadata);
// Type: Amazon.DynamoDBv2.Internal::AmazonDynamoDBStreamsMetadata
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Internal {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Internal::AmazonDynamoDBStreamsMetadata*
class CORDL_TYPE AmazonDynamoDBStreamsMetadata : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_OperationNameMapping))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* OperationNameMapping;

  __declspec(property(get = get_ServiceId))::StringW ServiceId;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::IServiceMetadata"
  constexpr operator ::Amazon::Runtime::Internal::IServiceMetadata*() noexcept;

  static inline ::Amazon::DynamoDBv2::Internal::AmazonDynamoDBStreamsMetadata* New_ctor();

  /// @brief Method .ctor, addr 0x1745788, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_OperationNameMapping, addr 0x1745714, size 0x74, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_OperationNameMapping();

  /// @brief Method get_ServiceId, addr 0x17456d4, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_ServiceId();

  /// @brief Convert to "::Amazon::Runtime::Internal::IServiceMetadata"
  constexpr ::Amazon::Runtime::Internal::IServiceMetadata* i___Amazon__Runtime__Internal__IServiceMetadata() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmazonDynamoDBStreamsMetadata();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmazonDynamoDBStreamsMetadata", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmazonDynamoDBStreamsMetadata(AmazonDynamoDBStreamsMetadata&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmazonDynamoDBStreamsMetadata", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmazonDynamoDBStreamsMetadata(AmazonDynamoDBStreamsMetadata const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Internal::AmazonDynamoDBStreamsMetadata, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Internal
NEED_NO_BOX(::Amazon::DynamoDBv2::Internal::AmazonDynamoDBStreamsMetadata);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Internal::AmazonDynamoDBStreamsMetadata*, "Amazon.DynamoDBv2.Internal", "AmazonDynamoDBStreamsMetadata");
