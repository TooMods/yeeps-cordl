#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EndPointType)
// Forward declare root types
namespace Amazon::Lambda {
class EndPointType;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::EndPointType);
// Type: Amazon.Lambda::EndPointType
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::EndPointType*
class CORDL_TYPE EndPointType : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field KAFKA_BOOTSTRAP_SERVERS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_KAFKA_BOOTSTRAP_SERVERS, put = setStaticF_KAFKA_BOOTSTRAP_SERVERS))::Amazon::Lambda::EndPointType* KAFKA_BOOTSTRAP_SERVERS;

  /// @brief Method FindValue, addr 0x2bb5334, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::EndPointType* FindValue(::StringW value);

  static inline ::Amazon::Lambda::EndPointType* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x2bb52cc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::Lambda::EndPointType* getStaticF_KAFKA_BOOTSTRAP_SERVERS();

  /// @brief Method op_Implicit, addr 0x2bb53a0, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::EndPointType* op_Implicit___Amazon__Lambda__EndPointType_(::StringW value);

  static inline void setStaticF_KAFKA_BOOTSTRAP_SERVERS(::Amazon::Lambda::EndPointType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EndPointType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EndPointType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EndPointType(EndPointType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EndPointType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EndPointType(EndPointType const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::EndPointType, 0x18>, "Size mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::EndPointType);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::EndPointType*, "Amazon.Lambda", "EndPointType");
