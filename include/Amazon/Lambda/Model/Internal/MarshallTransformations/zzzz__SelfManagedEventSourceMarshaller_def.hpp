#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SelfManagedEventSourceMarshaller)
namespace Amazon::Lambda::Model {
class SelfManagedEventSource;
}
namespace Amazon::Runtime::Internal::Transform {
template <typename R, typename T> class IRequestMarshaller_2;
}
namespace Amazon::Runtime::Internal::Transform {
class JsonMarshallerContext;
}
// Forward declare root types
namespace Amazon::Lambda::Model::Internal::MarshallTransformations {
class SelfManagedEventSourceMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::Internal::MarshallTransformations::SelfManagedEventSourceMarshaller);
// Type: Amazon.Lambda.Model.Internal.MarshallTransformations::SelfManagedEventSourceMarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model::Internal::MarshallTransformations {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model.Internal.MarshallTransformations::SelfManagedEventSourceMarshaller*
class CORDL_TYPE SelfManagedEventSourceMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::Amazon::Lambda::Model::Internal::MarshallTransformations::SelfManagedEventSourceMarshaller* Instance;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::Lambda::Model::SelfManagedEventSource*,::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>"
  constexpr
  operator ::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::Lambda::Model::SelfManagedEventSource*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*() noexcept;

  /// @brief Method Marshall, addr 0x2bab0d8, size 0x370, virtual true, abstract: false, final true
  inline void Marshall(::Amazon::Lambda::Model::SelfManagedEventSource* requestObject, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext* context);

  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::SelfManagedEventSourceMarshaller* New_ctor();

  /// @brief Method .ctor, addr 0x2bab448, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::SelfManagedEventSourceMarshaller* getStaticF_Instance();

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::Lambda::Model::SelfManagedEventSource*,::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::Lambda::Model::SelfManagedEventSource*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IRequestMarshaller_2___Amazon__Lambda__Model__SelfManagedEventSource____Amazon__Runtime__Internal__Transform__JsonMarshallerContext__() noexcept;

  static inline void setStaticF_Instance(::Amazon::Lambda::Model::Internal::MarshallTransformations::SelfManagedEventSourceMarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelfManagedEventSourceMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelfManagedEventSourceMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelfManagedEventSourceMarshaller(SelfManagedEventSourceMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelfManagedEventSourceMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelfManagedEventSourceMarshaller(SelfManagedEventSourceMarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::Internal::MarshallTransformations::SelfManagedEventSourceMarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::Lambda::Model::Internal::MarshallTransformations
NEED_NO_BOX(::Amazon::Lambda::Model::Internal::MarshallTransformations::SelfManagedEventSourceMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::Internal::MarshallTransformations::SelfManagedEventSourceMarshaller*, "Amazon.Lambda.Model.Internal.MarshallTransformations",
                       "SelfManagedEventSourceMarshaller");
