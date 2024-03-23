#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DeleteFunctionCodeSigningConfigRequestMarshaller)
namespace Amazon::Lambda::Model {
class DeleteFunctionCodeSigningConfigRequest;
}
namespace Amazon::Runtime::Internal::Transform {
template <typename T, typename R> class IMarshaller_2;
}
namespace Amazon::Runtime::Internal {
class IRequest;
}
namespace Amazon::Runtime {
class AmazonWebServiceRequest;
}
// Forward declare root types
namespace Amazon::Lambda::Model::Internal::MarshallTransformations {
class DeleteFunctionCodeSigningConfigRequestMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::Internal::MarshallTransformations::DeleteFunctionCodeSigningConfigRequestMarshaller);
// Type: Amazon.Lambda.Model.Internal.MarshallTransformations::DeleteFunctionCodeSigningConfigRequestMarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model::Internal::MarshallTransformations {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model.Internal.MarshallTransformations::DeleteFunctionCodeSigningConfigRequestMarshaller*
class CORDL_TYPE DeleteFunctionCodeSigningConfigRequestMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance,
                             put = setStaticF__instance))::Amazon::Lambda::Model::Internal::MarshallTransformations::DeleteFunctionCodeSigningConfigRequestMarshaller* _instance;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Lambda::Model::DeleteFunctionCodeSigningConfigRequest*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Lambda::Model::DeleteFunctionCodeSigningConfigRequest*>*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Runtime::AmazonWebServiceRequest*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*() noexcept;

  /// @brief Method GetInstance, addr 0x2eb8024, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::DeleteFunctionCodeSigningConfigRequestMarshaller* GetInstance();

  /// @brief Method Marshall, addr 0x2eb7bec, size 0x7c, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::IRequest* Marshall(::Amazon::Runtime::AmazonWebServiceRequest* input);

  /// @brief Method Marshall, addr 0x2eb7c68, size 0x3bc, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::IRequest* Marshall(::Amazon::Lambda::Model::DeleteFunctionCodeSigningConfigRequest* publicRequest);

  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::DeleteFunctionCodeSigningConfigRequestMarshaller* New_ctor();

  /// @brief Method .ctor, addr 0x2eb80d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::DeleteFunctionCodeSigningConfigRequestMarshaller* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x2eb807c, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::DeleteFunctionCodeSigningConfigRequestMarshaller* get_Instance();

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Lambda::Model::DeleteFunctionCodeSigningConfigRequest*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Lambda::Model::DeleteFunctionCodeSigningConfigRequest*>*
  i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__IRequest____Amazon__Lambda__Model__DeleteFunctionCodeSigningConfigRequest__() noexcept;

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Runtime::AmazonWebServiceRequest*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*
  i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__IRequest____Amazon__Runtime__AmazonWebServiceRequest__() noexcept;

  static inline void setStaticF__instance(::Amazon::Lambda::Model::Internal::MarshallTransformations::DeleteFunctionCodeSigningConfigRequestMarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeleteFunctionCodeSigningConfigRequestMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeleteFunctionCodeSigningConfigRequestMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeleteFunctionCodeSigningConfigRequestMarshaller(DeleteFunctionCodeSigningConfigRequestMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeleteFunctionCodeSigningConfigRequestMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeleteFunctionCodeSigningConfigRequestMarshaller(DeleteFunctionCodeSigningConfigRequestMarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::Internal::MarshallTransformations::DeleteFunctionCodeSigningConfigRequestMarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::Lambda::Model::Internal::MarshallTransformations
NEED_NO_BOX(::Amazon::Lambda::Model::Internal::MarshallTransformations::DeleteFunctionCodeSigningConfigRequestMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::Internal::MarshallTransformations::DeleteFunctionCodeSigningConfigRequestMarshaller*, "Amazon.Lambda.Model.Internal.MarshallTransformations",
                       "DeleteFunctionCodeSigningConfigRequestMarshaller");
