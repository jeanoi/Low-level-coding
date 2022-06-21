--19101732 = S0,S1,S3,S5,S6,S7


library ieee;
USE ieee.std_logic_1164.all;


ENTITY FSM IS
    PORT(a: in bit; clk: in std_logic; b:out bit_vector(0 to 4));
END FSM;

ARCHITECTURE logic of FSM IS 
    TYPE state is (S0,S1,S3,S5,S6,S7);
    SIGNAL state1, state2: state;

BEGIN
    PROCESS(clk);
    BEGIN
        IF(reset='1')THEN
            state1 <= s0;
        ELSIF(clk'EVENT AND clk=1='1')THEN
            state1 <= state2;
        END IF;
    END PROCESS;
                                                                      
    PROCESS(a, state1)
    BEGIN
        CASE state1 IS
            WHEN S0 =>
                IF(a='1')THEN 
                    state2 <= S1;
                    b <= '00001'
                ELSE 
                    state2 <= S3;
                    b <= '00010'
                END IF;

            WHEN S1 =>
                IF(a='1')THEN 
                    state2 <= S5;
                    b <= '00011'
                ELSE 
                    state2 <= S3;
                    b <= '00010'
                END IF;

            WHEN S3 =>
                IF(a='1')THEN 
                    state2 <= S5;
                    b <= '00011'
                ELSE 
                    state2 <= S7;
                    b <= '00101'
                END IF;

            WHEN S5 =>
                IF(a='1')THEN 
                    state2 <= S6;
                    b <= '00100'
                ELSE 
                    state2 <= S7;
                    b <= '00101'
                END IF;

             WHEN S6 =>
                IF(a='1')THEN 
                    state2 <= S0;
                    b <= '00000'
                ELSE 
                    state2 <= S7;
                    b <= '00101'
                END IF;  

            WHEN S7 =>
                IF(a='1')THEN 
                    state2 <= S1;
                    b <= '00001'
                ELSE 
                    state2 <= S3;
                    b <= '00010'
                END IF;
        END CASE;
    END PROCESS;
END ARCHITECTURE;
