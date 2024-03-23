#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AmazonLambdaMetadata)
namespace Amazon::Runtime::Internal {
class IServiceMetadata;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
// Forward declare root types
namespace Amazon::Lambda::Internal {
class AmazonLambdaMetadata;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Internal::AmazonLambdaMetadata);
// Type: Amazon.Lambda.Internal::AmazonLambdaMetadata
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Internal {
// Is value type: false
// CS Name: ::Amazon.Lambda.Internal::AmazonLambdaMetadata*
class CORDL_TYPE AmazonLambdaMetadata : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_OperationNameMapping))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* OperationNameMapping;

  __declspec(property(get = get_ServiceId))::StringW ServiceId;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::IServiceMetadata"
  constexpr operator ::Amazon::Runtime::Internal::IServiceMetadata*() noexcept;

  static inline ::Amazon::Lambda::Internal::AmazonLambdaMetadata* New_ctor();

  /// @brief Method .ctor, addr 0x2bc2c28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_OperationNameMapping, addr 0x2bc2c78, size 0x74, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_OperationNameMapping();

  /// @brief Method get_ServiceId, addr 0x2bc2c38, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_ServiceId();

  /// @brief Convert to "::Amazon::Runtime::Internal::IServiceMetadata"
  constexpr ::Amazon::Runtime::Internal::IServiceMetadata* i___Amazon__Runtime__Internal__IServiceMetadata() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmazonLambdaMetadata();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmazonLambdaMetadata", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmazonLambdaMetadata(AmazonLambdaMetadata&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmazonLambdaMetadata", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmazonLambdaMetadata(AmazonLambdaMetadata const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Internal::AmazonLambdaMetadata, 0x10>, "Size mismatch!");

} // namespace Amazon::Lambda::Internal
NEED_NO_BOX(::Amazon::Lambda::Internal::AmazonLambdaMetadata);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Internal::AmazonLambdaMetadata*, "Amazon.Lambda.Internal", "AmazonLambdaMetadata");
