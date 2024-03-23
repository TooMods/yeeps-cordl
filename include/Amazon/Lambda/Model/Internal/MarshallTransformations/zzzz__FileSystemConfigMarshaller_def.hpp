#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FileSystemConfigMarshaller)
namespace Amazon::Lambda::Model {
class FileSystemConfig;
}
namespace Amazon::Runtime::Internal::Transform {
template <typename R, typename T> class IRequestMarshaller_2;
}
namespace Amazon::Runtime::Internal::Transform {
class JsonMarshallerContext;
}
// Forward declare root types
namespace Amazon::Lambda::Model::Internal::MarshallTransformations {
class FileSystemConfigMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::Internal::MarshallTransformations::FileSystemConfigMarshaller);
// Type: Amazon.Lambda.Model.Internal.MarshallTransformations::FileSystemConfigMarshaller
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model::Internal::MarshallTransformations {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model.Internal.MarshallTransformations::FileSystemConfigMarshaller*
class CORDL_TYPE FileSystemConfigMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::Amazon::Lambda::Model::Internal::MarshallTransformations::FileSystemConfigMarshaller* Instance;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::Lambda::Model::FileSystemConfig*,::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>"
  constexpr
  operator ::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::Lambda::Model::FileSystemConfig*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*() noexcept;

  /// @brief Method Marshall, addr 0x2ec0648, size 0xe0, virtual true, abstract: false, final true
  inline void Marshall(::Amazon::Lambda::Model::FileSystemConfig* requestObject, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext* context);

  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::FileSystemConfigMarshaller* New_ctor();

  /// @brief Method .ctor, addr 0x2ec0728, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::FileSystemConfigMarshaller* getStaticF_Instance();

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::Lambda::Model::FileSystemConfig*,::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::Lambda::Model::FileSystemConfig*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IRequestMarshaller_2___Amazon__Lambda__Model__FileSystemConfig____Amazon__Runtime__Internal__Transform__JsonMarshallerContext__() noexcept;

  static inline void setStaticF_Instance(::Amazon::Lambda::Model::Internal::MarshallTransformations::FileSystemConfigMarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemConfigMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemConfigMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemConfigMarshaller(FileSystemConfigMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemConfigMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemConfigMarshaller(FileSystemConfigMarshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::Internal::MarshallTransformations::FileSystemConfigMarshaller, 0x10>, "Size mismatch!");

} // namespace Amazon::Lambda::Model::Internal::MarshallTransformations
NEED_NO_BOX(::Amazon::Lambda::Model::Internal::MarshallTransformations::FileSystemConfigMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::Internal::MarshallTransformations::FileSystemConfigMarshaller*, "Amazon.Lambda.Model.Internal.MarshallTransformations", "FileSystemConfigMarshaller");
