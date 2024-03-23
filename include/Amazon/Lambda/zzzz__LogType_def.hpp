#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LogType)
// Forward declare root types
namespace Amazon::Lambda {
class LogType;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::LogType);
// Type: Amazon.Lambda::LogType
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::LogType*
class CORDL_TYPE LogType : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field None, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_None, put = setStaticF_None))::Amazon::Lambda::LogType* None;

  /// @brief Field Tail, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Tail, put = setStaticF_Tail))::Amazon::Lambda::LogType* Tail;

  /// @brief Method FindValue, addr 0x2bb61b0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::LogType* FindValue(::StringW value);

  static inline ::Amazon::Lambda::LogType* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x2bb6148, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::Lambda::LogType* getStaticF_None();

  static inline ::Amazon::Lambda::LogType* getStaticF_Tail();

  /// @brief Method op_Implicit, addr 0x2bb621c, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::LogType* op_Implicit___Amazon__Lambda__LogType_(::StringW value);

  static inline void setStaticF_None(::Amazon::Lambda::LogType* value);

  static inline void setStaticF_Tail(::Amazon::Lambda::LogType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LogType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LogType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LogType(LogType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LogType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LogType(LogType const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::LogType, 0x18>, "Size mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::LogType);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::LogType*, "Amazon.Lambda", "LogType");
