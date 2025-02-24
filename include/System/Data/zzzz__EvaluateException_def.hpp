#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__InvalidExpressionException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EvaluateException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Data {
class EvaluateException;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::EvaluateException);
// Type: System.Data::EvaluateException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::EvaluateException*
class CORDL_TYPE EvaluateException : public ::System::Data::InvalidExpressionException {
public:
  // Declarations
  static inline ::System::Data::EvaluateException* New_ctor();

  static inline ::System::Data::EvaluateException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Data::EvaluateException* New_ctor(::StringW s);

  /// @brief Method .ctor, addr 0x1942ae4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1942adc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x1942aec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW s);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EvaluateException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EvaluateException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EvaluateException(EvaluateException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EvaluateException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EvaluateException(EvaluateException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::EvaluateException, 0x90>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::EvaluateException);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::EvaluateException*, "System.Data", "EvaluateException");
