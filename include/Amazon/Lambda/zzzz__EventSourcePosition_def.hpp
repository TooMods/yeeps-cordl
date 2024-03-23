#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EventSourcePosition)
// Forward declare root types
namespace Amazon::Lambda {
class EventSourcePosition;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::EventSourcePosition);
// Type: Amazon.Lambda::EventSourcePosition
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::EventSourcePosition*
class CORDL_TYPE EventSourcePosition : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field AT_TIMESTAMP, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AT_TIMESTAMP, put = setStaticF_AT_TIMESTAMP))::Amazon::Lambda::EventSourcePosition* AT_TIMESTAMP;

  /// @brief Field LATEST, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LATEST, put = setStaticF_LATEST))::Amazon::Lambda::EventSourcePosition* LATEST;

  /// @brief Field TRIM_HORIZON, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TRIM_HORIZON, put = setStaticF_TRIM_HORIZON))::Amazon::Lambda::EventSourcePosition* TRIM_HORIZON;

  /// @brief Method FindValue, addr 0x2bb54d4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::EventSourcePosition* FindValue(::StringW value);

  static inline ::Amazon::Lambda::EventSourcePosition* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x2bb546c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::Lambda::EventSourcePosition* getStaticF_AT_TIMESTAMP();

  static inline ::Amazon::Lambda::EventSourcePosition* getStaticF_LATEST();

  static inline ::Amazon::Lambda::EventSourcePosition* getStaticF_TRIM_HORIZON();

  /// @brief Method op_Implicit, addr 0x2bb5540, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::EventSourcePosition* op_Implicit___Amazon__Lambda__EventSourcePosition_(::StringW value);

  static inline void setStaticF_AT_TIMESTAMP(::Amazon::Lambda::EventSourcePosition* value);

  static inline void setStaticF_LATEST(::Amazon::Lambda::EventSourcePosition* value);

  static inline void setStaticF_TRIM_HORIZON(::Amazon::Lambda::EventSourcePosition* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventSourcePosition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventSourcePosition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventSourcePosition(EventSourcePosition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventSourcePosition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventSourcePosition(EventSourcePosition const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::EventSourcePosition, 0x18>, "Size mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::EventSourcePosition);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::EventSourcePosition*, "Amazon.Lambda", "EventSourcePosition");
