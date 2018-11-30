#include "musicalNote.h"
#include <cassert> // required for debugging function assert()
#include <string> // for string data type to use as return value
#include <cmath> // for pow()

// Store definitions of member functions in same container
namespace mad_2c
{
// CONSTRUCTOR
//   musicalNote(int value, float length);
//     Precondition: NONE
//     Postcondition: Constructs a musicalNote object whose value
//     represents the note using an integer with A above middle C
//     representing 0 and middle C representing -9 as well as a
//     length of quarter note. By default, the musicalNote object's
//     value is set to middle C or -9 and its length is set to a
//     quarter note.
    musicalNote::musicalNote(int initValue, float initLength)
    {
        value = initValue;
        length = initLength;
    }

// PUBLIC MODIFIER FUNCTIONS
//   void setValue(int newValue);
//     Precondition: newValue must fall in the range of -9 to 2
//     including only integers in that range but the value is used
//     to specify how far it moves from its current position in
//     either a negative or positive direction. Thus, the value of
//     newValue cannot be -9 if the current value is less than 0 or
//     2 if the current value is greater than 0.
//     Postcondition: The value of the musicalNode object will be
//     set to that specified by the formal parameter.
    void musicalNote::setValue(int newValue)
    {
        // checks whether newValue falls within the valid range
        assert(newValue >= -9 && newValue <= 2);
        // but, we need to check that the value does not fall
        // outside the range as a shifting amount to current value
        assert((newValue + value) >= -9 && (newValue + value) <= 2);

        value += newValue;
    }

//   void setLength(float newLength);
//     Precondition: The value of newLength must be one of the
//     following: sixteenth, eight, quarter, half or whole note.
//     Postcondition: The length of the note is set to that
//     specified by the formal parameter's contents.
    void musicalNote::setLength(float newLength)
    {
        // if the assertion below is false, an error is issued.
        // Otherwise, control proceeds to the following statement.
        assert(newLength == 16/100.0f || newLength == 8/100.0f ||
               newLength == 25/100.0f || newLength == 50/100.0f ||
               newLength == 1.0f);

        length = newLength;
    }

// PUBLIC ACCESSOR FUNCTIONS
//   float getFrequency() const;
//     Precondition: NONE (by default, a musicalNote object has a
//                         quarter note length and a corresponding
//                         frequency).
//     Postcondition: Returns the frequency of the note which is
//     calculated by 440 x 2^(n/12) where n is the value of the
//     note.
    float musicalNote::getFrequency() const
    {
        // note that value, given the range of [-9, 2], has an
        // absolute value that is less than 12 and thus will always
        // result in a zero when divided by 12 due to integer division
        return (440*pow(2.0, value/12.0));
    }

//   string getNoteValue() const;
//     Precondition: NONE
//     Postcondition: Returns the value of the note as a string
//     including whether it is sharp or natural
    std::string musicalNote::getNoteValue() const
    {
        // return string representing value's note
        switch(value)
        {
            case -9: return "C";
            case -8: return "C#";
            case -7: return "D";
            case -6: return "D#";
            case -5: return "E";
            case -4: return "F";
            case -3: return "F#";
            case -2: return "G";
            case -1: return "G#";
            case 0: return "A";
            case 1: return "A#";
            case 2: return "B";
        }
    }

// NON-MEMBER FUNCTIONS
//   bool operator ==(const musicalNote& n1, const musicalNote& n2);
//     Precondition: NONE
//     Postcondition: Returns true if n1 and n2 are the same note
//     (i.e. have the same value and length). Note, the frequency
//     alone cannot be used to determine whether the notes are the
//     same due to the fact that the lengths of two notes may be
//     different while their values and frequencies are equal.
    bool operator ==(const musicalNote& n1, const musicalNote& n2)
    {
        return (n1.getValueAsInt() == n2.getValueAsInt() &&
                n1.getLength() == n2.getLength());
    }
}