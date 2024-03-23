#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CorrectClockSkew)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Threading {
class ReaderWriterLockSlim;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Amazon::Runtime {
class CorrectClockSkew;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::CorrectClockSkew);
// Type: Amazon.Runtime::CorrectClockSkew
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::CorrectClockSkew*
class CORDL_TYPE CorrectClockSkew : public ::System::Object {
public:
  // Declarations
  /// @brief Field clockCorrectionDictionary, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_clockCorrectionDictionary,
                             put = setStaticF_clockCorrectionDictionary))::System::Collections::Generic::IDictionary_2<::StringW, ::System::TimeSpan>* clockCorrectionDictionary;

  /// @brief Field clockCorrectionDictionaryLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_clockCorrectionDictionaryLock, put = setStaticF_clockCorrectionDictionaryLock))::System::Threading::ReaderWriterLockSlim* clockCorrectionDictionaryLock;

  /// @brief Field manualClockCorrection, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_manualClockCorrection, put = setStaticF_manualClockCorrection))::System::Nullable_1<::System::TimeSpan> manualClockCorrection;

  /// @brief Field manualClockCorrectionLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_manualClockCorrectionLock, put = setStaticF_manualClockCorrectionLock))::System::Threading::ReaderWriterLockSlim* manualClockCorrectionLock;

  /// @brief Method GetClockCorrectionForEndpoint, addr 0x1fe24dc, size 0x224, virtual false, abstract: false, final false
  static inline ::System::TimeSpan GetClockCorrectionForEndpoint(::StringW endpoint);

  /// @brief Method GetCorrectedUtcNowForEndpoint, addr 0x1fe2100, size 0x2d4, virtual false, abstract: false, final false
  static inline ::System::DateTime GetCorrectedUtcNowForEndpoint(::StringW endpoint);

  /// @brief Method SetClockCorrectionForEndpoint, addr 0x1fe47ec, size 0x224, virtual false, abstract: false, final false
  static inline void SetClockCorrectionForEndpoint(::StringW endpoint, ::System::TimeSpan correction);

  static inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::TimeSpan>* getStaticF_clockCorrectionDictionary();

  static inline ::System::Threading::ReaderWriterLockSlim* getStaticF_clockCorrectionDictionaryLock();

  static inline ::System::Nullable_1<::System::TimeSpan> getStaticF_manualClockCorrection();

  static inline ::System::Threading::ReaderWriterLockSlim* getStaticF_manualClockCorrectionLock();

  /// @brief Method get_GlobalClockCorrection, addr 0x1fe46c8, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::TimeSpan> get_GlobalClockCorrection();

  static inline void setStaticF_clockCorrectionDictionary(::System::Collections::Generic::IDictionary_2<::StringW, ::System::TimeSpan>* value);

  static inline void setStaticF_clockCorrectionDictionaryLock(::System::Threading::ReaderWriterLockSlim* value);

  static inline void setStaticF_manualClockCorrection(::System::Nullable_1<::System::TimeSpan> value);

  static inline void setStaticF_manualClockCorrectionLock(::System::Threading::ReaderWriterLockSlim* value);

  /// @brief Method set_GlobalClockCorrection, addr 0x1fe4754, size 0x98, virtual false, abstract: false, final false
  static inline void set_GlobalClockCorrection(::System::Nullable_1<::System::TimeSpan> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CorrectClockSkew();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CorrectClockSkew", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CorrectClockSkew(CorrectClockSkew&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CorrectClockSkew", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CorrectClockSkew(CorrectClockSkew const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CorrectClockSkew, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::CorrectClockSkew);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CorrectClockSkew*, "Amazon.Runtime", "CorrectClockSkew");
